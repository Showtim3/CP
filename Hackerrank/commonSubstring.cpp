#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;


string checkSubstr(string s1, string s2){
  map<char,int> m;
  for(int i =0 ;i < s1.length();i++){
    if(!m[s1[i]]){
        m[s1[i]]=1;
    }
  }
  for(int i=0;i<s2.length();i++){
    if(m[s2[i]]){
      return "YES";
    }
  }
  return "NO";
}
int main(){

    int t;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        cout<<checkSubstr(s1,s2)<<endl;
    }
  return 0;
}
