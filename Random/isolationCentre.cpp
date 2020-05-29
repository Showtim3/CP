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
      li i,n,q;
      cin>>n>>q;
      string s;
      cin>>s;
      map<char, li>m;
      for(i=0;i<s.length();i++){
        m[s[i]]++;
      }
      while(q--){
        li k;
        cin>>k;
        li ans=0;
        if(k>=n){
          ans=0;
        } else if(k==0){
          ans=n;
        } else {
            for(auto x: m){
              if(x.second>k){
                ans+=abs(x.second-k);
              }
            }
        }
        cout<<ans<<endl;
      }
      m.clear();
    }
  return 0;
}
