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
    int t;
    cin>>t;

    while(t--){
        lli n,k;
        cin>>n>>k;
        vector<lli> v;
        lli i;
        for(i=0;i<n;i++){
          lli ele;
          cin>>ele;
          v.push_back(ele);
        }
        lli peak = 0;
        for(i=1;i<k-1;i++){
          if(v[i]>v[i+1] && v[i]>v[i-1]){
            peak++;
          }
        }
        lli maxPeak=peak;
        lli minIndex=0;

        for(i=k;i<n;i++){
          if(v[i-k+1]>v[i-k] && v[i-k+1]>v[i-k+2]){
            peak--;
          }
          if(v[i-1]>v[i-2]&&v[i-1]>v[i]){
            peak++;
          }
          // cout<<i<<" "<<k<<endl;
          if(peak>maxPeak){
            maxPeak=peak;
            minIndex = i-k+1;
            // cout<<i<<" "<<k<<endl;
          }
        }
        cout<<maxPeak+1<<" "<<minIndex+1<<endl;
        v.clear();
}
  return 0;
}
