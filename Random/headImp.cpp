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


class Heap{
public:
  vector<int> heap;
  void push(int d){
    heap.push_back(d);
    upHeapify(heap.size()-1);
  }

  void pop(){
    swap(heap[0], heap[heap.size()-1]);
    heap.pop_back();
    downHeapify(0);
  }
  void upHeapify(int index){
    if(index<=0){
      return;
    }
    int parent = (index-1)/2;
    if(heap[parent]<heap[index]){
      swap(heap[parent], heap[index]);
      upHeapify(parent);
    }
    else return;
  }
  void downHeapify(int index){
    int child1 = (2*index) + 1;
    int child2 = (2*index) + 2;
    int largestIndex = index;
    if(child1 >= heap.size() && child2 >= heap.size()){
      return;
    }
    if(child1 < heap.size() && heap[largestIndex]<heap[child1]){
      largestIndex = child1;
    }
    if(child2 < heap.size() && heap[largestIndex]<heap[child2]){
      largestIndex = child2;
    }
    if(index==largestIndex) return;
    swap(heap[index], heap[largestIndex]);
    downHeapify(largestIndex);
  }

  int top(){
    if(heap.empty()) return 0;
    return heap[0];
  }

  bool empty(){
    if(heap.size()==0){
      return true;
    }
    return false;
  }


  void del(int k){
    int index = find(heap.begin(), heap.end(), k) - heap.begin();
    heap[index] = INT_MAX-10;
    upHeapify(index);
    pop();
  }

  void print(){
    for(int i=0;i<heap.size();i++){
      cout<<heap[i]<<" ";
    }
    cout<<endl;
  }
};

int main(){
  int n;
  cin>>n;
  vector<int> v;
  int i;
  v.resize(n);
  for(i=0;i<n;i++){
    cin>>v[i];
  }
  Heap h;
  int k;
  cin>>k;
  for(i=0;i<k;i++){
    h.push(v[i]);
  }
  cout<<h.top()<<" ";
  for(i=k;i<n;i++){
    h.del(v[i-k]);
    h.push(v[i]);
    cout<<h.top()<<" ";
  }
  cout<<endl;

  return 0;
}
