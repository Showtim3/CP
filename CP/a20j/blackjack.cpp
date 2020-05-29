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
    int remaining = n-10;
    int ans;
    if(remaining==0){
      ans=0;
    } else if(remaining>=12 || remaining<=0){
      ans=0;
    } else {
      if(remaining==1||remaining==1){
        ans=1;
      }
      else if(remaining==10){
        ans=4;
      }
      else if(remaining>=2 && remaining<=9){
        ans=1;
      }
      ans=ans*4;
      if(remaining==10){
        ans-=1;
      }
    }

    cout<<ans<<endl;
  return 0;
}
