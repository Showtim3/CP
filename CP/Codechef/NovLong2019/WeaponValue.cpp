#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;

    int n;
    int i,j;
    while(t--){
      cin>>n;
      int count = 0;
      char s[n][12];
      string ans="0000000000";
      for(i=0;i<n;i++){
        cin>>s[i];
      }

      for(j=0;j<10;j++){
        if(s[0][j] != s[1][j] && (s[0][j] == '1' || s[1][j] == '1')){
          ans[j] = '1';
        }
      }
      // cout<<ans<<endl;

      for(i=2;i<n;i++){
        for(j=0;j<10;j++){
          // j == 9 ? cout<<j<<s[i][j]<< " "<<ans[j]<<endl : NULL;
          // cout<<(s[i][j] != ans[j] && (s[i][j] == '1' || ans[j] == '1'))<<endl;
          if(s[i][j] == '1' && ans[j] == '1'){
            ans[j]='0';
          } else if(s[i][j] != ans[j] && (s[i][j] == '1' || ans[j] == '1')){
            ans[j] = '1';
          }

        }
      }
      for(i=0;i<10;i++){
        if(ans[i]=='1'){
          count++;
        }
      }
      // cout<<ans<<endl;
      cout<<count<<endl;
    }
  return 0;
}
