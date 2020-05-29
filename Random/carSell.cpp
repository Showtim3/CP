#include <iostream>
#include <vector>
#include <algorithm>
#define lli long long int

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        lli n,i;
        cin>>n;
        vector<lli> v;
        v.reserve(n);
        for(i=0;i<n;i++){
          lli ele;
          cin>>ele;
          v.push_back(ele);
        }
        sort(v.begin(), v.end(), greater<lli>());
        lli sum=0;
        lli mod = 1000000007;
        for(i=0;i<n;i++){
          lli value = (v[i]-i)%mod;
          if(value > 0){
            sum+=(value%mod);
          }
        }
        sum=sum%mod;
        cout<<sum<<endl;
        v.clear();
    }
  return 0;
}
