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


int maxProfit(int len, vector<pair<int, int> >prices, int n){
    if(len<=0 || n<0){
      return 0;
    }
    int cost1=0;
    if(len-prices[n].first>=0){
        cost1 = prices[n].second + maxProfit(len - prices[n].first, prices, n);
    }

    int cost2 = maxProfit(len, prices, n-1);
    return max(cost1,cost2);
}

int maxProfitFromDp(vector<pair<int, int> >prices, int n){
  int dp[10]={0};
  int i,j;
  for(i=1;i<=n;i++){
    int tempMax=INT_MIN;
    for(j=0;j<prices.size();j++){
      if(i-prices[j].first>=0){
          tempMax = max(tempMax, prices[j].second+dp[i-prices[j].first]);
      }
    }
    dp[i]=max(dp[i-1], tempMax);
  }

  return dp[n];
}

int main(){

    int len = 4;
    vector<pair<int, int> > prices;
    // {1, 5, 8, 9, 10, 17, 17, 20}
    prices.push_back(make_pair(1,1));
    prices.push_back(make_pair(2,5));
    prices.push_back(make_pair(3,8));
    prices.push_back(make_pair(4,9));
    prices.push_back(make_pair(5,10));
    prices.push_back(make_pair(6,17));
    prices.push_back(make_pair(7,17));
    prices.push_back(make_pair(8,20));

    cout<<maxProfit(len, prices, 7)<<endl;
    cout<<maxProfitFromDp(prices, len);
  return 0;
}
