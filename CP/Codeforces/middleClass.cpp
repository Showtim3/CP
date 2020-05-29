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
    int t;
    cin>>t;

    while(t--){
      lli n,x;
      cin>>n>>x;
      vector<lli> v;
      lli i;
      for(i=0;i<n;i++){
        lli ele;
        cin>>ele;
        v.push_back(ele);
      }
      for(i=0;i<n;i++){
        v[i]-=x;
      }
      lli totalPositiveSum=0;
      lli totalPositiveCount=0;
      for(i=0;i<n;i++){
        if(v[i]>=0){
          totalPositiveCount++;
          totalPositiveSum+=v[i];
        }
      }

      sort(v.begin(), v.end(), greater<int>());

      for(i=0;i<n;i++){
        if(v[i] < 0 && v[i]+totalPositiveSum>=0){
          totalPositiveSum -= abs(v[i]);
          totalPositiveCount++;
        }
        if(totalPositiveSum<=0){
          break;
        }
      }
      cout<<totalPositiveCount<<endl;
    }
  return 0;
}
