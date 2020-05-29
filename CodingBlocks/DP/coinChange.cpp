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

using namespace std;
//
// vector<int> dp;
// int n = 1000;
// void precompute(vector<int> coins){
//   for(int i=1;i<=n;i++){
//     for(int j=0;j<coins.size();j++){
//       if(i-coins[j]>=0){
//         dp[i]=min(dp[i],dp[i-coins[j]])+1;
//       }
//     }
//   }
// }

int topDown(int n, vector<int> coins, int c[]){
// cout<<n<<endl;
  if(n<=0) {
    return 0;
  }

  if(c[n]!=0){
    return c[n];
  }

  int minCoins = INT_MAX;
  for(auto y: coins){
    if(n-y>=0){
        minCoins=min(minCoins, topDown(n-y, coins, c)+1);
    }
  }

  c[n]=minCoins;
  return c[n];
}

int main(){

    // dp.resize(n+1);
    // for(int i=0;i<=1000;i++){
    //   dp[i]=INT_MAX;
    // }

    // dp[0]=0;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(7);
    coins.push_back(10);
    // precompute(coins);
    // for(int i=0;i<dp.size();i++){
    //   cout<<i<<" : "<<dp[i]<<endl;
    // }
    int dp[100]={0};
    int m=10;
    cout<<topDown(m,coins,dp)<<endl;
  return 0;
}
