#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){


  priority_queue<int, vector<int> , greater<int> > pq;


  int n,k;
  cin>>n>>k;
  int i,j,ele;
  for(i=0;i<n;i++){
    for(j=0;j<k;j++){
      cin>>ele;
      pq.push(ele);
    }
  }

  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  } cout<<endl;


  return 0;
}
