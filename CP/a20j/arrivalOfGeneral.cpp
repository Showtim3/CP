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

    int n;
    cin>>n;
    int i;
    vector<int> v;
    for(i=0;i<n;i++){
      int ele;
      cin>>ele;
      v.push_back(ele);
    }
    int minElementIndex = min_element(v.begin(),v.end())-v.begin();
    int maxElementIndex = max_element(v.begin(),v.end())-v.begin();

    for(i=n-1;i>=0;i--){
      if(v[i]==v[minElementIndex]){
        minElementIndex = i;
        break;
      }
    }
    int maxSwap = maxElementIndex;
    int minSwap = n-minElementIndex-1;

    // cout<<minElementIndex<<" "<<maxElementIndex<<endl;
    // cout<<minSwap<<" "<<maxSwap<<endl;
    int ans = maxSwap+minSwap;
    if(minElementIndex<=maxElementIndex){
      // cout<<"Recuing 1"<<endl;
      ans-=1;
    }
    cout<<ans<<endl;


  return 0;
}
