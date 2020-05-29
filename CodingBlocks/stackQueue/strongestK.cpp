#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    li n;
    cin>>n;

    vector<li> v;
    li i;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    li k;

    cin>>k;
    li maxFirst=-1;
    for(i=0;i<k;i++){
      maxFirst = max(maxFirst, v[i]);
    }

    deque<li> q;

    q.push_back(maxFirst);
    cout<<q.front()<<" ";
    for(i=k;i<n;i++){
      if(q.size()>k){
        q.pop_front();
      }
      if(q.front()<v[i]){
        // while(!q.empty()) q.pop();
        q.clear();
        q.push_back(v[i]);
      } else {
        while(q.back()<v[i]) q.pop_back();
        q.push_back(v[i]);
      }
      cout<<q.front()<<" ";
    }
  return 0;
}
