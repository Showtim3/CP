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

    li t;
    cin>>t;

    while(t--){
      li n,q;
      cin>>n>>q;
      li startPos=0;
      li distance=0,a,b;
      while(q--){
        cin>>a>>b;
        distance+=abs(startPos-a)+abs(a-b);
        startPos=b;
      }
      cout<<distance<<endl;
    }
  return 0;
}
