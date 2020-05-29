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

    int n,k;
    cin>>n>>k;
    int i;
    vector<int> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }

    set<int> s;
    int uniqueCount=0;
    int j;
    int ans=0;
    for(i=0;i<n;i++){
      int j=0;
      while(true){
        if(i+j>=n){
          break;
        }
        if(!s.count(v[i+j])){
          uniqueCount++;
          s.insert(v[i+j]);
        }
        if(uniqueCount==k){
          ans++;
        }
        if(uniqueCount>k){
          break;
        }
        j++;
      }
      uniqueCount=0;
      s.clear();
    }
    cout<<ans<<endl;
  return 0;
}
