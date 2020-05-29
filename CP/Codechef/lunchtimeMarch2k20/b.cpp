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
      li x,k;
      cin>>s;
      cin.ignore();
      cin>>k>>x;
      map<char, li> m;
      li i,len=0;
      for(i=0;i<s.length();i++){
        if(!m.count(s[i])){
          m.insert(make_pair(s[i],1));
          len++;
        } else {
          li currentCount = m[s[i]];
          if(currentCount>=x && k<=0){
            break;
          } else if(currentCount>=x && k>0){
            k--;
          } else {
            m[s[i]]++;
            len++;
          }
        }
      }
      cout<<len<<endl;
      s.clear();
      m.clear();
    }
  return 0;
}
