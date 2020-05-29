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


  // string s ="aaabbccds";
  int t;
  cin>>t;
  while(t--){
  string s;
  cin>>s;
  int i=0,j=0;
  int n=s.length();
  int count;

    while(i<n && j<n){
      while(j<n && s[i]==s[j]){
        j++;
      }
    if(j-i>=1){
      s.erase(i+1,j-i-1);
      s.insert(i+1,to_string(j-i));
    } else {
      s.insert(i+1,"1");
    }
    if(j-i>9){
      i+=3;
    } else {
      i=i+2;
    }

    j=i;

    n=s.length();
}
  cout<<s<<endl;
}
  return 0;
}
