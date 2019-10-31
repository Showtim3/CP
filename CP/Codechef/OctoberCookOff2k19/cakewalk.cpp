#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdint>
#include <cmath>

#define ll long long
#define lli long long int
#define ulli unsigned long long

using namespace std;
// 1 000 000 000 000 000 000
int main(){
// 1 000 000 000 000
    int t;
    cin>>t;
// 1024 000 000 000
    while(t--){
      ulli n;
        cin>>n;

        if(n<10){
          cout<<"No"<<endl;
        }
        else {
          int numberOfZeros=0;
          while(n%10==0) {
            n=n/10;
            numberOfZeros++;
          }
          // cout<<"numberOfZeros: "<<numberOfZeros<<"log: "<<log2(n)<<endl;
          if(n==0 || n==1 || (numberOfZeros >= int(log2(n)) && (n%2==0)) && (log2(n)==int(log2(n)))) {
            cout<<"Yes"<<endl;
          } else {
          cout<<"No"<<endl;
          }


        }

    }
  return 0;
}
