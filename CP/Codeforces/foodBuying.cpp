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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
    fastio
    int t;
    cin>>t;
    lli n;
    while(t--){
      cin>>n;
      lli ans =0;
      while(n>=10){
        li x = log10(n);
        li val = pow(10,x);
        ans += val;
        n-= val;
        n+=pow(10,x-1);
      }

      cout<<ans+n<<endl;
    }
  return 0;
}
