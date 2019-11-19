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
    string s1,s2;
    int count;
    int i,j;
    while(t--){
      count = 0;
      cin>>s1>>s2;
      i=0, j=0;
      while(i<s2.length() && j<s1.length()){
          if(s1[j]==s2[i]){
            count++;
            i++;
          }
        j++;
      }
      // cout<<count;
      if(count == s2.length()){
        cout<<"YES"<<endl;
      } else cout<<"NO"<<endl;
    }
  return 0;
}
