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
    vector<li> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    li ans=0;
    li currentMax=v[0];
    li currentMin=v[0];
    for(i=0;i<n;i++){
        if(v[i]>currentMax || v[i]<currentMin){
          ans++;
        }
        currentMax=max(currentMax, v[i]);
        currentMin=min(currentMin, v[i]);
    }
    cout<<ans<<endl;
  return 0;
}
