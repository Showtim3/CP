#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;
    int x,y,n,k;
    int p,c;
    while(t--){
      bool ans = false;
        cin>>x>>y>>k>>n;
        while(n--){
          cin>>p>>c;
          if(p >= x-y && c <= k){
            ans = true;
          }
        }
        ans ? cout<<"LuckyChef"<<endl: cout<<"UnluckyChef"<<endl ;
    }

  return 0;
}
