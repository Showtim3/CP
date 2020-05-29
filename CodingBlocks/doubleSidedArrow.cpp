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
    int i,j,k;
    for(i=1;i<=n;i++){
      for(j=1;j<=n-i;j++){
        cout<<"-";
      }
      for(k=1;k<=i;k++){
        cout<<k<<" ";
      }
      for(j=1;j<=n-i;j++){
        cout<<"-";
      }
      cout<<endl;
    }
  return 0;
}
