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
      li n;
      cin>>n;
      li ele,i;
      vector<li> a;
      a.reserve(n);
      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }

      li currSum = a[0];
      li maxSum = a[0];

      for(i=1;i<n;i++){
        currSum = currSum + a[i];
        currSum = max(currSum, a[i]);
        maxSum = max(currSum, maxSum);
      }
      cout<<maxSum<<endl;
      a.clear();
    }
  return 0;
}
