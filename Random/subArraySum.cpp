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

int maxSubarraySum(int a[], int n){
  int sum=0;
  int maxSum=INT_MIN;
  int i,j,k;
  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      sum=0;
      for(k=i;k<=j;k++){
        sum+=a[k];
      }
      maxSum=max(maxSum, sum);
    }
  }
  return maxSum;
}

void print(int a[], int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  } cout<<endl;
  return;
}

int maxSubarraySum2(int a[], int n){
  int i,j;
  int prefixArray[n];
  prefixArray[0]=a[0];

  for(i=1;i<n;i++){
    prefixArray[i]=a[i]+prefixArray[i-1];
  }
  int maxSum=INT_MIN;
  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      int currentSum=0;
      currentSum = prefixArray[j] - prefixArray[i] + a[i];
      maxSum=max(maxSum, currentSum);
    }
  }
  return maxSum;
}

int main(){
    int n;
    int a[9]={-4,1,3,-2,6,2,-8,-9,4};
    int i,j,k;
    n=9;
    int firstSum = maxSubarraySum(a,n);
    int secondSum = maxSubarraySum2(a,n);
    cout<<firstSum<<" "<<secondSum<<endl;
    return 0;
}
