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

int getNoOfWays(int n, vector<int> &v, int j){
  if(n<0 || j<0){
    return 0;
  }
  if(n==0){
    return 1;
  }
  return getNoOfWays(n-v[j],v,j) + getNoOfWays(n,v,j-1);
}

int topDown(int n, vector<int> &v, int j, int dp[][300]){
  if(n<0 || j<0){
    return 0;
  }
  if(n==0){
    return 1;
  }
  if(dp[n][j]!=-1){
    return dp[n][j];
  }
  dp[n][j] = topDown(n-v[j],v,j,dp) + topDown(n,v,j-1,dp);
  return dp[n][j];
}

int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      vector<int> v;
      cin>>n;
      int i;
      for(i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
      }
      int k; cin>>k;
      sort(v.begin(), v.end());
      // cout<<getNoOfWays(k,v,n-1)<<endl;
      int dp[300][300]={-1};
      int j;
      for(i=0;i<300;i++){
        for(j=0;j<300;j++){
          dp[i][j]=-1;
        }
      }
      cout<<topDown(k,v,n-1,dp)<<endl;
    }
  return 0;
}
