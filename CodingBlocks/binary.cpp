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

    // while(t--){
      string s;
      cin>>s;
      lli number=0;
      int i;
      for(i=0;i<s.length();i++) {
        if(s[i]=='1'){
          number+=pow(2,s.length()-i-1);
        }
      }
      cout<<number<<endl;
    // }
  return 0;
}
