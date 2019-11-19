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

    int t;
    cin>>t;

    lli n,xi,yi,i;
    vector<lli> x;
    vector<lli> y;
    vector<lli> diff;
    vector<lli> c;
    while(t--){
          cin>>n;
          x.resize(n);
          y.resize(n);
          for(i=0;i<n;i++){
            cin>>x[i]>>y[i];
          }

          diff.resize(n);
          sort(x.begin(),x.end());

          for(i=0;i<n-1;i++){
            diff[i] = x[i+1] - x[i];
          }
          diff[i]=x[n-1]-x[n-2];

          c.resize(n);
          for(i=1;i<n-1;i++){
            c[i] = diff[i] + diff[i-1];
          }

          c[0]=diff[0];
          c[n-1]=diff[n-1];

          sort(c.begin(),c.end());
          sort(y.begin(),y.end());
          lli sum = 0, i=0;
          for(auto x: c){
            sum+= x*y[i];
            i++;
          }
          x.clear();
          y.clear();
          diff.clear();
          c.clear();
          cout<<sum<<endl;

    }
  return 0;
}
