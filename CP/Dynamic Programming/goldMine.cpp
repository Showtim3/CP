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
  int t; cin>>t;
  while(t--){
    vector<vector<int> >goldMine;
    int n,m;
    cin>>n>>m;
    int i,j;
    goldMine.reserve(n);
    for(i=0;i<n;i++){
      vector<int> v;
      v.reserve(m);
      for(j=0;j<m;j++){
        int ele; cin>>ele;
        v.push_back(ele);
      }
      goldMine.push_back(v);
      v.clear();
    }
    li dp[100][100]={0};
    li ans = INT_MIN;
    for(i=0;i<n;i++){
        dp[i][0] = goldMine[i][0];
        ans=max(ans, dp[i][0]);
    }
    li maximum;

    for(i=1;i<m;i++){
      for(j=0;j<n;j++){
        if(j-1<0){
          maximum = max(dp[j][i-1], dp[j+1][i-1]);
        } else if(j+1>=n) {
          maximum = max(dp[j][i-1], dp[j-1][i-1]);
        } else {
          maximum = max(dp[j][i-1], max(dp[j-1][i-1], dp[j+1][i-1]));
        }
        dp[j][i]=maximum + goldMine[j][i];
        ans=max(ans, dp[j][i]);
      }
    }
    // cout<<endl;
    // for(i=0;i<n;i++){
    //   for(j=0;j<m;j++){
    //     cout<<dp[i][j]<<"\t";
    //   } cout<<endl;
    // }
    cout<<ans<<endl;
  }
  return 0;
}
