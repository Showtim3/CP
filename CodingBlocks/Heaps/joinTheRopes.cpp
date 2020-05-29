#include <iostream>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;


int getCost(int a[], int n){
  priority_queue<int, vector<int>, greater<int> > pq(a, a+n);
  int cost=0;
  while(pq.size()>1){
    int min1 = pq.top();
    pq.pop();
    int min2 = pq.top();
    pq.pop();
    cost+= min1+min2;
    pq.push(min1+min2);
  }
  return cost;

}
int main(){

    int arr[1000];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<getCost(arr, n)<<endl;
  return 0;
}
