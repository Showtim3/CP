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
    // n=5;
    int i,k;
    for(i=1;i<=n;i++){
      //Print Numbers
      for(k=1;k<=n-i+1;k++){
        cout<<k<<" ";
      }
      //Print Stars
      for(k=1;k<=2*(i-2)+1;k++){
        cout<<"* ";
      }
      cout<<endl;
    }
  return 0;
}
