#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
      li n,q,i,ele;
      vector<li> a;
      vector<li> sum;
      cin>>n>>q;
      a.reserve(n);
      sum.resize(n);
      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }
      while(q--){
        li p;
        cin>>p;
      for(i=0;i<n;i++){
        sum[i]=a[i]^p;
      }
      li even=0;
      li odd=0;
      for(i=0;i<n;i++){
        if(__builtin_popcount(sum[i])%2==0){
          even++;
        } else {
          odd++;
        }
      }
      cout<<even<<" "<<odd<<endl;
    }
    a.clear();
    sum.clear();
    }
  return 0;
}
