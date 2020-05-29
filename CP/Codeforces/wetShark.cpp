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
  fastio
  lli n,i;
  cin>>n;
  vector<lli> v;
  v.resize(n);

  for(i=0;i<n;i++){
    cin>>v[i];
  }
  lli sum=0;
  lli minOdd = INT_MAX;
  for(i=0;i<n;i++){
    sum+=v[i];
    if(v[i]&1){
      minOdd=min(v[i], minOdd);
    }
  }
  if(sum&1){
    sum-=minOdd;
  }
  if(sum<0){
    sum=0;
  }
  cout<<sum<<endl;

  return 0;
}
