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
    // n=7;
    int i,k;
    // 16 12 8 4 0
    for(i=1;i<=n/2+1;i++){
        for(k=1;k<=4*(((n+1)/2)-i);k++){
          cout<<" ";
        }
        if(i==1) cout<<1;
        else {
          for(k=i;k>=1;k--){
            cout<<k<<" ";
          }
          for(k=1;k<(4*(i-1))-1;k++){
            cout<<" ";
          }
          for(k=1;k<=i;k++){
            cout<<k<<" ";
          }
        }
        for(k=1;k<=4*(((n+1)/2)-i);k++){
          cout<<" ";
        }
        cout<<endl;
    }

    for(i=n/2;i>=1;i--){
      for(k=1;k<=4*(((n+1)/2)-i);k++){
        cout<<" ";
      }
      if(i==1) cout<<1;
      else {
        for(k=i;k>=1;k--){
          cout<<k<<" ";
        }
        for(k=1;k<(4*(i-1))-1;k++){
          cout<<" ";
        }
        for(k=1;k<=i;k++){
          cout<<k<<" ";
        }
      }
      for(k=1;k<=4*(((n+1)/2)-i);k++){
        cout<<" ";
      }
      cout<<endl;
    }


  return 0;
}
