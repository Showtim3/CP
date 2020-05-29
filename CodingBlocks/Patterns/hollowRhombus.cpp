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
    int i;
    for(i=1;i<=n;i++){
      for(int k=1;k<=n-i;k++){ //spaces
        cout<<" ";
      }
      for(int k=1;k<=n;k++){
        if(i==1 || i==n) {
          cout<<"*";
          continue;
        }
        if(k==1||k==n) cout<<"*";
        else cout<<" ";
      }
    cout<<endl;
  }
  return 0;
}
