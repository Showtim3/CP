#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int k,n;
    cin>>k>>n;
    vector<int> v;
    v.resize(n);
    int i;
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    sort(v.begin(), v.end());
    int j=k-1;
    i=0;
    int diff;
    int ans=INT_MAX;
    while(j<n){
      diff=v[j]-v[i];
      ans=min(diff,ans);
      j++;
      i++;
    }
    cout<<ans<<endl;
  return 0;
}
