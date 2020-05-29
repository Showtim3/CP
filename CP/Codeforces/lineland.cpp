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


bool isNegative(li n){
  return n<0;
}
int main(){
    int n;
    cin>>n;
    li i;
    vector<li> v;
    for(i=0;i<n;i++){
      li ele;
      cin>>ele;
      v.push_back(ele);
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;

    mini = abs(v[1]-v[0]);
    maxi = abs(v[n-1]-v[0]);
    cout<<mini<<" "<<maxi<<endl;
    for(i=1;i<=n-2;i++){
      mini = min(abs(v[i+1]-v[i]), abs(v[i]-v[i-1]));
      maxi = max(abs(v[n-1]-v[i]), abs(v[i]-v[0]));
      cout<<mini<<" "<<maxi<<endl;
    }
    mini = abs(v[n-1]-v[n-2]);
    maxi = abs(v[n-1]-v[0]);
    cout<<mini<<" "<<maxi<<endl;
  return 0;
}
