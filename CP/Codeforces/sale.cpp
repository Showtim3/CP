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
    int n,m;
    cin>>n>>m;
    li i;
    vector<int> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }

    sort(v.begin(), v.end());
    li sum=0;
    i=0;
    while(i<n && m>0 && (v[i]<0)){
      if(v[i]<0){
        sum+=v[i];
        m--;
      }
      i++;
    }
    cout<<abs(sum)<<endl;
  return 0;
}
