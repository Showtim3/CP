#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      string s,r;
      cin>>s;
      cin>>r;
      lli cnt=0,i;
      for(i=0;i<s.length();i++){
        if(s[i]!=r[i]){
          cnt++;
        }
      }
      lli ans = cnt*cnt;
      cout<<ans<<endl;
    }
  return 0;
}
