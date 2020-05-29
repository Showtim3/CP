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

string getAnswer(string s1, string s2){
string s3="";
int n=s1.length();
s3.resize(s1.length());
for(int i=0;i<s1.length();i++){
  if(s1[i]-s2[i]==0){
    s3[i]='0';
  } else s3[i]='1';
}
return s3;
}

int main(){

    int t;
    cin>>t;

    while(t--){
      string s1,s2;
      cin>>s1>>s2;
      string ans = getAnswer(s1,s2);
      cout<<ans<<endl;
    }
  return 0;
}
