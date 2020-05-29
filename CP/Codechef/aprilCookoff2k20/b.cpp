#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

#define MOD 1000000007
using namespace std;

lli power(lli x, lli y)
{
    lli res = 1;     // Initialize result

    x = x % MOD; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % MOD;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x);
        x=x%MOD;
    }
    return (res%MOD);
}
int main(){
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin>>t;

    while(t--){
      lli n,a;
      cin>>n>>a;
      lli i=1;
      lli ans=0;

      while(n--){
        lli itr=power(a,i);
        ans+=((power(a,i))%MOD);
        ans=ans%MOD;
        a=(itr*a);
        a=a%MOD;
        i+=2;
      }
      ans=ans%MOD;
      cout<<ans<<endl;
    }
  return 0;
}
