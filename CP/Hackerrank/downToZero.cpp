#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;


int value = 1000001;
vector<li> dp;

vector<int> getFactors(li n){
    vector<int> factors;
    factors.reserve(1000);
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            factors.push_back(i);
            factors.push_back(n/i);
        }
    }
    sort(factors.begin(), factors.end());
    factors.pop_back();
    return factors;
}


void buildDp(){

  dp[0]=0;
  dp[1]=1;
  dp[2]=2;
  dp[3]=3;
  for(li i=4;i<=value;i++){
      dp[i] = dp[i-1]+1;
      li minEle=INT_MAX;
      for(auto x: getFactors(i)){
        minEle=min(minEle, dp[x]);
      }
      dp[i]=min(minEle, dp[i-1]) +1;
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    dp.resize(value+1);
    buildDp();
    li q;
    cin>>q;
    while(q--){
      li n;
      cin>>n;
      cout<<dp[n]<<endl;
    }

  return 0;
}
