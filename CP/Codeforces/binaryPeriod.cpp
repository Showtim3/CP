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
  fastio
    int t;
    cin>>t;

    while(t--){
      string s;
      cin>>s;
      string ans="";
      if(s.length()==1){
        ans.append(s);
        ans.append(s);
      } else {
        bool zeroPresent = false;
        bool onePresent = false;
        int i;
        for(i=0;i<s.length();i++){
          if(zeroPresent&&onePresent){
            break;
          }
          if(s[i]=='1'){
            onePresent=true;
          }
          if(s[i]=='0'){
            zeroPresent=true;
          }
        }
        if(zeroPresent && onePresent){
          if(s[0]=='0'){
            for(i=0;i<s.length();i++){
              ans.append("01");
            }
          } else if(s[0]=='1'){
            for(i=0;i<s.length();i++){
              ans.append("10");
            }
          }
        } else if(zeroPresent){
          ans.append(s);
        } else if(onePresent){
          ans.append(s);
        }
      }
      cout<<ans<<endl;
      }
  return 0;
}
