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

    int i,j,k;
    for(i=1;i<=(n/2+1);i++){
      if(i==1||i==n){
        for(k=1;k<=n;k++){
          cout<<"*"<<"\t";
        }cout<<endl;
        continue;
      }
      for(k=1;k<=(n/2) - i+2;k++){
        cout<<"*"<<"\t";
      }
      for(k=1;k<=(2*(i-1))-1;k++){
        cout<<"\t";
      }
      for(k=1;k<=(n/2) - i+2;k++){
        cout<<"*"<<"\t";
      }
        cout<<endl;
    }
// 3 1
    for(i=1;i<=n/2;i++){
      if(i==n/2){
        for(k=1;k<=n;k++){
          cout<<"*"<<"\t";
        }cout<<endl;
        continue;
      }
      for(k=1;k<=i+1;k++){
        cout<<"*"<<"\t";
      }
      for(k=1;k<=(2*(n/2-i))-1;k++){
        cout<<"\t";
      }
      for(k=1;k<=i+1;k++){
        cout<<"*"<<"\t";
      }
        cout<<endl;
    }


  return 0;
}
