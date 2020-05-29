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

int main(){

    int n;
    cin>>n;
    int i;
    vector<int> v;
    int sum=0;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    sum=accumulate(v.begin(), v.end(), 0);
    int ans=0;
    for(auto x: v){
      if((sum-x)%2==0){
        ans++;
      }
    }
    cout<<ans<<endl;
  return 0;
}
