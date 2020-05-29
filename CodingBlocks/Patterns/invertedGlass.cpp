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

    int n;
    cin>>n;
    int i,k;
    for(i=1;i<=n;i++){
      for(k=0;k<i;k++){
        cout<<n-k<<" ";
      }
      for(k=1;k<=4*(n-i)+1;k++){
        cout<<" ";
      }
      for(k=i-1;k>=0;k--){
        cout<<" "<<n-k;
      }
      cout<<endl;
    }
    for(i=0;i<2*n+1;i++){
      cout<<abs(n-i)<<" ";
    } cout<<endl;
    for(i=n;i>=1;i--){
      for(k=0;k<i;k++){
        cout<<n-k<<" ";
      }
      for(k=1;k<=4*(n-i)+1;k++){
        cout<<" ";
      }
      for(k=i-1;k>=0;k--){
        cout<<" "<<n-k;
      }
      cout<<endl;
    }
  return 0;
}
