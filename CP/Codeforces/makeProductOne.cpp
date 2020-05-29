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
    lli n,i;
    cin>>n;
    vector<lli> v;
    for(i=0;i<n;i++){
      int ele; cin>>ele;
      v.push_back(ele);
    }
    lli sum=0;
    lli zeroCount=0;
    bool isZeroPresent=false;

    for(i=0;i<n;i++){
      if(v[i]<0){
        sum+= (-1-v[i]);
        zeroCount++;
      }
      else if(v[i]>0){
        sum+=v[i]-1;
      }
      else if(v[i]==0){
        isZeroPresent = true;
        sum+=1;
      }
    }
    if(zeroCount%2!=0 && !isZeroPresent){
      sum+=2;
    }
    cout<<sum<<endl;
  return 0;
}
