#include <iostream>
#include <set>
#include <map>
#include <queue>
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

    int t;
    cin>>t;

    while(t--){
      li n,s;
      cin>>n>>s;
      li c[110];
      li type[110];
      li i;
      for(i=0;i<n;i++){
        cin>>c[i];
      }
      for(i=0;i<n;i++){
        cin>>type[i];
      }
      li min1 = INT_MAX;
      li min2 = INT_MAX;

      for(i=0;i<n;i++){
        if(type[i]==0){
          min1 = min(min1, c[i]);
        }
        else if(type[i]==1){
          min2 = min(min2, c[i]);
        }
      }
      s=100-s;
      li sum = min1+min2;

      if(sum<=s) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
  return 0;
}
