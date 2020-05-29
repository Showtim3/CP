#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int getMaxSubArraySum(int a[], int n){
  int currentSum=0;
  int maxSum=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      currentSum = 0;
      for(int k=i;k<=j;k++){
        currentSum+=a[k];
      }
      cout<<"currentSum: "<<currentSum;
      if(maxSum<currentSum){
        maxSum = currentSum;
      }
      cout<<endl;
    }
  }
  return maxSum;
}
int main(){

    // int a[]= {1,4,5,6,7,10,15};
    int a[] = {-4,1,3,-2,6,2,-8,-9,4};
    int n = sizeof(a)/sizeof(a[0]);
    int max = getMaxSubArraySum(a, n);
    cout<<"Done"<<endl;
    cout<<max<<endl;

  return 0;
}
