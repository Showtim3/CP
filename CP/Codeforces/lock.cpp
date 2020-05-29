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

using namespace std;

lli getFactorial(lli n){
  return (n == 1 || n == 0) ? 1 : getFactorial(n - 1) * n;
}
int main(){

    lli n;
    cin>>n;
    lli ans;
    if(n==1){
      ans=1;
    } else {
        ans = (pow(3,n) + 5*n)/6;
    }
    cout<<ans<<endl;
    return 0;
}
