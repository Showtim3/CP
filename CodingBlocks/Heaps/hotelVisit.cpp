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

  priority_queue<int> pq;

  int q,k;
  cin>>q>>k;
  while(q--){
    int ch,x,y;
    cin>>ch;
    if(ch==1){
      cin>>x>>y;
      int distance = (x*x) + (y*y);
      if(pq.size()<k) pq.push(distance);
      else {
        if(pq.top() > distance){
          pq.pop();
          pq.push(distance);
        }
      }
    }
    if(ch==2){ cout<<pq.top()<<endl;}

  }
  return 0;
}
