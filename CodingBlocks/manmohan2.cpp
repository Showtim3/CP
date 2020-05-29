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

    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++){
      if(i==1){
        cout<<1;
      } else {
        for(j=1;j<=i;j++){
          if(j==1 || j==i){
            cout<<i<<"\t";
          } else cout<<0<<"\t";
        }
      }
      cout<<endl;
    }
  return 0;
}
