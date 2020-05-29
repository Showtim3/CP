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

    string s;
    cin>>s;
    int len = s.length();
    int a = sqrt(len);
    int b,i,j;
    if(a*a==len){
      b=a;
    } else b=a+1;
    string ans;
    for(i=0;i<=a;i++){
      ans="";
      for(j=0;j<len;j+=b){
        ans+=s[i+j];
      }
      cout<<ans<<" ";
    }
    cout<<endl;
  return 0;
}
