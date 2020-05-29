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

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      vector<int> v;
      v.reserve(n);
      int i,j;
      for(i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
      }
      int maxPossible=INT_MIN;
      int minPossible=INT_MAX;
      i=0;
      while(i<n){
        int currentCount=1;
        j=i;
        while(j+1<n){
            if(v[j+1]-v[j]<=2){
              currentCount++;
            } else{
              break;
            }
            j++;
        }
        i=j+1;
        maxPossible=max(currentCount, maxPossible);
        minPossible=min(currentCount, minPossible);
      }
      cout<<minPossible<<" "<<maxPossible<<endl;
    }
  return 0;
}
