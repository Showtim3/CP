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
    li a,b;
    while(t--){
      cin>>a>>b;

      if(a>b){ swap(a,b);}

      li diff = b - a;
      li ans = 0;
      li rem;
      ans = diff/5;
      if(diff % 5 != 0) {
        rem = diff % 5;
        if(rem == 1 || rem ==2){
          ans+=1;
        }
        else {
          ans+=2;
        }

      }
      cout<<ans<<endl;


    }
  return 0;
}
