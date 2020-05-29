#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define ulli unsigned long long int
using namespace std;

int main(){

    ulli n,k;
    ulli even, odd;
    cin>>n>>k;
    if(n&1){ // if odd
      odd=n/2+1;
      even = n/2;
    } else {
      odd = n/2;
      even=n/2;
    }
    ulli ans;
    if(k<=odd){
      ans = (2*k)-1;
      cout<<ans<<endl;
    } else {
      k=k-odd;
      ans = 2*k;
      cout<<ans<<endl;
    }
  return 0;
}
