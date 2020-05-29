#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      int i;
      vector<int> v;
      v.reserve(n);
      for(i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
      }
      map<int, vector<int> > m;
      for(i=0;i<n;i++){
        m[v[i]].push_back(i);
      }
      // for(auto x: m){
      //   cout<<x.first<<" -> ";
      //   for(auto y: x.second){
      //     cout<<y<<" ";
      //   }
      //   cout<<endl;
      // }
      int ansIndex=-1;
      int totalMax = -1;
      for(auto x: m){
        if(x.second.size()==1){
          if(totalMax == -1){
            totalMax = 1;
            ansIndex = x.first;
          }
        } else {
          sort(x.second.begin(), x.second.end());
          int lastIndex = x.second[0];
          int currentAns=1;
          for(i=1;i<x.second.size();i++){
            if(x.second[i]-lastIndex > 1){
              // cout<<x.second[i]<<"-"<<lastIndex<<endl;
              currentAns++;
              lastIndex = x.second[i];
            }
          }
          if(totalMax < currentAns){
            totalMax = currentAns;
            ansIndex = x.first;
          }
        }
        // cout<<x.first<<" "<<totalMax<<endl;
        // cout<<"=----"<<endl;
      }
      cout<<ansIndex<<endl;
      v.clear();
    }
  return 0;
}
