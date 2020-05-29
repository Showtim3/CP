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


int solve(string s, lli l, lli r){
    int value;
    int maxValue;
    lli finalAns=0;
    for(lli i=0;i<s.length();i++){
      if(s[i]=='1'){
        value = pow(2, s.length()-i-1);
        if(value<=r) {
          r-=value;
          finalAns+=value;
        } else {
          continue;
        }
      }
    }
    return finalAns;
}

string getBinaryString(lli a){
  string str= "";
  while(a>0){
    int digit = ((a%2)!=0);
    string temp = to_string(digit);
    a=a/2;
    str+=temp;
  }
  reverse(str.begin(), str.end());
  return str;
}

string getResultantString(string a, string b){
  string rs="";
  int i=0, j=0;
  while(i<a.length() && j<b.length()){
    char c;
    if(a[i]=='1' && b[j]=='1'){
      c='1';
    } else c='0';
    i++;
    j++;
    rs+=c;
  }
  while(i<a.length()){
    rs+=a[i];
    i++;
  }
  while(j<b.length()){
    rs+=b[j];
    j++;
  }
  return rs;
}
int main(){
    int t;
    cin>>t;

    while(t--){
      lli a,b,l,r;
      cin>>a>>b>>l>>r;
      string first = getBinaryString(a);
      string second = getBinaryString(b);
      string resultantString = getResultantString(first, second);
      // cout<<resultantString<<endl;
      lli ans = solve(resultantString, l, r);
      cout<<ans<<endl;
    }
  return 0;
}
