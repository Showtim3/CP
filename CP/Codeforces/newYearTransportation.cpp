#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){
    int n;
    cin>>n;
    int destination;
    cin>>destination;
    vector<int> v;
    v.resize(n+1);
    int i;
    for(i=1;i<n;i++){
      cin>>v[i];
    }
    i=1;
    bool ans = 0;
    while(i<=n){
      if(i==destination){
        ans=1;
        break;
      }
      if(i>destination) {
        ans=0; break;
      }
      i+=v[i];
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  return 0;
}
