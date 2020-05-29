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

    // int t;
    // cin>>t;
    //
    // while(t--){
      string s;
      cin>>s;
      map<char, int> m;
      for(int i=0;i<s.length();i++){
        if(m.count(s[i])){
            m.find(s[i])->second+=1;
        } else {
          m.insert(make_pair(s[i],1));
        }
      }
      int max=0;
      char maxChar;
      for(auto x: m){
        if(x.second>max){
          max=x.second;
          maxChar = x.first;
        }
      }
      cout<<maxChar<<endl;
    // }
  return 0;
}
