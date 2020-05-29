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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
    fastio
    int t;
    cin>>t;

    while(t--){
        li n,k;
        cin>>n>>k;
        vector<li> v;
        li i;
        v.reserve(n);
        for(i=0;i<n;i++){
          li ele; cin>>ele;
          v.push_back(ele);
        }
        if(k==1){
          cout<<"yes"<<endl;
        } else {
          bool swapped = true;

          while(swapped){
            swapped=false;
            i=0;
            while(i+k<n){
              if(v[i]>v[i+k]){
                swap(v[i],v[i+k]);
                swapped=true;
              }
              i++;
            }
          }
          bool ans=1;
          for(i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
              ans=0;
              break;
            }
          }

          if(ans) cout<<"yes"<<endl;
          else cout<<"no"<<endl;
        }

        v.clear();
    }
  return 0;
}
