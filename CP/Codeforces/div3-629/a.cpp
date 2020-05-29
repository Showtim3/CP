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

    lli t;
    cin>>t;

    while(t--){
      lli a,b;
      cin>>a>>b;
      if(a<b){
        cout<<b-a<<endl;
      }
      else if(a%b==0){
        cout<<0<<endl;
      }
      else {
        lli ans = int((int(a/b) + 1))*b - a;
        cout<<ans<<endl;
      }
    }
  return 0;
}
