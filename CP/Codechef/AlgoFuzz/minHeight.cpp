#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int
#define ull unsigned long long
using namespace std;

int main(){

    ull a,b;
    int t;
    cin>>t;
    while(t--){
      cin>>a>>b;
      if(a==1||b==1){
        cout<<0<<endl;
      } else {
        ull mul = a*b;
        ull ans = mul - a - b;
        cout<<ans<<endl;
      }
    }
  return 0;
}
