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

// 1           1
// 1 2       2 1
// 1 2 3   3 2 1
// 1 2 3 4 3 2 1

int main(){

    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
      for(j=1;j<2*n;j++){
        if(j<=i){
          cout<<j<<"\t";
        } else if((2*n)-j<=i){
          cout<<(2*n)-j<<"\t";
        }
        else cout<<"\t";
      }
      cout<<endl;
    }
  return 0;
}
