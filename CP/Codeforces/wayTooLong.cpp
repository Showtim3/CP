#include <iostream>
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

    int t;
    cin>>t;

    while(t--){
      string s;
      cin>>s;
      string ans="";
      if(s.length()>10){
        ans= s[0] + to_string(s.length()-2) +s[s.length()-1];
      } else ans = s;
      cout<<ans<<endl;
    }
  return 0;
}
