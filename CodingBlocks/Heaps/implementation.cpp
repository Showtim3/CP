#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;
// Implementing max heap

void upheapify(vector<int> &heap, int child){
  if(child==0) return;
  int parent = (child-1)/2;
  if(heap[parent]<heap[child]){
    swap(heap[parent], heap[child]);
    upheapify(heap, parent);
  } else return;
}

void insert(vector<int> &heap, int key){
  heap.push_back(key);
  upheapify(heap, heap.size()-1);
}

void print(vector<int> &heap){
  for(int i=0;i<heap.size();i++){
    cout<<heap[i]<<" ";
  } cout<<endl;
}

void buildHeap(vector<int> &v){
  for(int i=0;i<v.size();i++){
    upheapify(v, i);
  }
}

void downHeapify(vector<int> &heap, int parent){

  int child1=2*parent + 1;
  int child2=2*parent + 2;
  if(child1 >=heap.size() && child2 >= heap.size()){
    return;
  }
  int largestIndex=parent;
  if(child1 < heap.size() && heap[child1] > heap[largestIndex]){
    largestIndex = child1;
  }
  if(child2 < heap.size() && heap[child2] > heap[largestIndex]){
    largestIndex = child2;
  }
  if(largestIndex==parent) return;

  swap(heap[parent], heap[largestIndex]);
  downHeapify(heap, largestIndex);
}


void deletePeek(vector<int> &heap){
  int n=heap.size();
  if(n==0) return;

  swap(heap[0], heap[n-1]);
  heap.pop_back();
  downHeapify(heap, 0);
}
int main(){

  vector<int> v;
  int n;
  cin>>n;
  int x,i;
  for(i=0;i<n;i++){
    cin>>x;
    insert(v, x);
  }
  print(v);
  deletePeek(v);
  print(v);
  return 0;
}
