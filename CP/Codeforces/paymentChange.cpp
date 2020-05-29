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
      int a,b,n,s;
      cin>>a>>b>>n>>s;
      int div = s/n;
      if(div<=a){
          s-=n*div;
      }
      else s-=n*a;

      if(s<=b){
        cout<<"yes"<<endl;
      }
      else cout<<"no"<<endl;
    }
  return 0;
}
