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

bool isUppercase(char ch){
  if(ch>='A'&&ch<='Z'){
    return true;
  } return false;
}
int main(){

    // int t;
    // cin>>t;
    //
    // while(t--){
      string s;
      vector<int> words;
      cin>>s;
      int i,j;
      int n = s.length();
      i=0;j=1;
      while(j<n){
        if(isUppercase(s[j])) {
          cout<<s.substr(i,j-i)<<endl;
          i=j;
        }
        j++;
      } cout<<s.substr(i,j-1)<<endl;
    // }
  return 0;
}
