#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;
    lli a,b;
    while(t--){
      cin>>a>>b;
      if(a==b){
        cout<<0<<endl;
      } else {
        lli diff = a-b;
        if(diff<0){
          if(diff%2==0){
            cout<<2<<endl;
          } else cout<<1<<endl;
        } else {
          if(diff%2==0){
            cout<<1<<endl;
          } else cout<<2<<endl;
        }
      }
    }
  return 0;
}
