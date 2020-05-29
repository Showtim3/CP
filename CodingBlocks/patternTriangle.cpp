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
      for(k=1;k<=n-i;k++){
        cout<<"\t";
      }
      for(j=i;j<=(2*(i-1))+1;j++){
          cout<<j<<"\t";
      }
      for(j=(2*(i-1));j>=i;j--){
          cout<<j<<"\t";
      }
      for(k=1;k<n-i;k++){
        cout<<"\t";
      }
      cout<<endl;
    }

  return 0;
}
