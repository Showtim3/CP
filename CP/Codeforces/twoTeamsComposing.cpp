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
      for(i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
      }
      if(n==1){
        cout<<0<<endl;
      } else {
      map<int, int> m;
      for(auto x: v){
        m[x]++;
      }
      int uniqueCount=0;
      int maxCount = -1;
      for(auto x: m){
        if(x.second==1){
          uniqueCount++;
        }
        maxCount=max(maxCount, x.second);
      }
      int totalElements = m.size();
      int remaniningUniqueElements = m.size() - 1;
      int ans;
      if(uniqueCount==n){
        ans=1;
      } else {
        ans = min(remaniningUniqueElements, maxCount);
        if(maxCount-ans>=2){
          ans+=1;
        }
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}
