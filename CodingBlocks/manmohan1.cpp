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

    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
      if(i%2!=0 || i==2 || i==3){
        for(j=1;j<=i;j++){
          cout<<1;
        }
      } else {
        for(j=1;j<=i;j++){
          if(j==1 || j==i){
            cout<<1;
          } else cout<<0;
        }
      }
      cout<<endl;
    }
  return 0;
}
