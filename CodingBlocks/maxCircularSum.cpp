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

int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      vector<int> a;
      a.reserve(n);
      int ele,i;
      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }

      int j;
      int maxSum = a[0];
      int currentSum = a[0];
      int totalMax=a[0];
      for(i=0;i<n;i++){
        maxSum = a[i];
        currentSum = a[i];
        j=(i+1)%n;
        // cout<<i<<endl;
        while(j!=i){
          currentSum = currentSum + a[j];
          currentSum = max(currentSum, a[j]);
          maxSum = max(currentSum, maxSum);
          // cout<<i<<" "<<j<<"maxSUm: "<<maxSum<<endl;
          j=(j+1)%n;
        }
        totalMax=max(maxSum, totalMax);
      }
      cout<<totalMax<<endl;
    }
  return 0;
}
