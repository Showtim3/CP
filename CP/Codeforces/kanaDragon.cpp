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

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      li x,n,m;
      cin>>x>>n>>m;
      bool ans = 0;

      while(x>0 && (n>0 && m>0)){
        li temp1= (x/2) + 10;
        li temp2 = x-10;
        if(temp1>=x){
          x = temp2;
          m--;
        } else {
          x = temp1;
          n--;
        }
        if(x<=0){
          ans=1;
          break;
        }
        // cout<<x<<endl;
      }

      while(x>0 && m>0){
        li temp1= x - 10;
        x=temp1;
        m--;
        if(x<=0){
          ans=1;
          break;
        }
        // cout<<x<<endl;
      }

      while(x>0 && n>0){
        li temp1= (x/2) + 10;
        x=temp1;
        n--;
        if(x<=0){
          ans=1;
          break;
        }
        // cout<<x<<endl;
      }

      if(ans) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  return 0;
}
