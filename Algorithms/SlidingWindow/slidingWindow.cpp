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
    int n,k,i;
    cin>>n>>k;
    vector<int> a;
    a.reserve(n);

    for(i=0;i<n;i++){
      cin>>a[i];
    }

    int maxSum=0,current=0;int j;
    for(i=0;i<=n-k;i++){
      current = 0;
      for(j=i;j<i+k;j++){
        current+=a[j];
      }
      maxSum = max(current, maxSum);
    }
    cout<<maxSum<<endl;
}

  return 0;
}
