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

    int t;
    cin>>t;
    ull n;
    while(t--){
      cin>>n;
       // 2 x (N-(2 ^ floor(log2 (N) ))) + 1

       ull ans = (2* (n - ( pow(2, floor(log2(n) ))))) + 1;
       cout<<ans<<endl;

    }
  return 0;
}
