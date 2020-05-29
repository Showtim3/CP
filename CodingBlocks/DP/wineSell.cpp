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



int getMaxPrice(int wines[], int n, int i, int j, int year){
if(i>n-1 || j<0 || i>j) return 0;
int first = (wines[i]*year) + getMaxPrice(wines,n,i+1,j,year+1);
int last =  (wines[j]*year) + getMaxPrice(wines,n,i,j-1,year+1);
int price = max(first,last);
return price;
}

int precompute(int dp[][100], int wines[], int n){
  int i,j;
  for(i=0;i<n;i++){
    cout<<wines[i]<<" ";
    dp[i][i]= n * wines[i];
  } cout<<endl;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i>=j) continue;
      int year = n-(j-i);
      cout<<year<<endl;
      int first  = (wines[i]*year) + dp[i+1][j];
      int second = (wines[j]*year) + dp[i][j-1];
      dp[i][j]= max(first,second);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cout<<dp[i][j]<<" ";
    } cout<<endl;
  }
  return dp[0][n];
}

int main(){
    int wines[5] = {2,4,6,2,5};

    int dp[100][100]={0};

    int n=5;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        dp[i][j]=0;
      }
    }

    precompute(dp,wines,n);
    // cout<<getMaxPrice(wines,5,0,4,1)<<endl;
  return 0;
}
