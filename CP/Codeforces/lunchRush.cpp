#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
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
    lli n,k;
    cin>>n>>k;
    lli ans=INT_MIN;
    while(n--){
      lli a,b;
      cin>>a>>b;
      lli diff = k-b;
      if(diff>=0){
        ans = max(a, ans);
      } else {
        diff=a-(b-k);
        ans = max(ans, diff);
      }
    }
    cout<<ans<<endl;
  return 0;
}
