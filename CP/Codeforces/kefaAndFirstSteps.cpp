#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int n,i;
    cin>>n;

    vector<int> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    i=0;
    int ans = -1;
    int current=1;
    while(i+1<n){
      if(v[i+1]>=v[i]){
        i++;
        current++;
      } else {
        ans = max(current, ans);
        i++;
        current=1;
      }
    }
    ans = max(current, ans);
    // if(current==n) ans=n;
    cout<<ans<<endl;
  return 0;
}
