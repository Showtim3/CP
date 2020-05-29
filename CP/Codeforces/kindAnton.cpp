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
      int n,i;
      cin>>n;
      vector<int> a;
      vector<li> b;

      for(i=0;i<n;i++){
        int ele;
        cin>>ele;
        a.push_back(ele);
      }

      for(i=0;i<n;i++){
        li ele;
        cin>>ele;
        b.push_back(ele);
      }

      int minusOneIndex=INT_MAX;
      int plusOneIndex=INT_MAX;
      for(i=0;i<n;i++){
        if(minusOneIndex!=INT_MAX && plusOneIndex!=INT_MAX){
          break;
        }
        if(a[i]==-1 && minusOneIndex==INT_MAX){
          minusOneIndex = i;
        } else if(a[i]==1 && plOneIndex==INT_MAX){
          plusOneIndex = i;
        }
      }
      bool possible = true;
      for(i=0;i<n;i++){
        if(a[i]==b[i]){
          continue;
        } if(b[i]>a[i] && plusOneIndex < i){
          continue;
        } else if(b[i]<a[i] && minusOneIndex < i){
          continue;
        } else {
          possible=false;
          break;
        }
      }
      if(possible) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  return 0;
}
