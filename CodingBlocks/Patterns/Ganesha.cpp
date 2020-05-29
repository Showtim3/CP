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
    int i,j;
    int half=(n/2)+1;
    for(i=1;i<=n;i++){
      // Upper half
      if(i<=n/2){
        for(j=1;j<=n;j++){
            if(j==1){
                cout<<"*"; continue;
            }
            if(j<half){
              cout<<" ";
            }
            if(j==half) cout<<"*";
            if(i==1 && j>half){
              cout<<"*";
            }
        }
      }
      //exactly half line
      else if(i==half){
        for(j=1;j<=n;j++){
          cout<<"*";
        }
      }
      // bottom half
      else {
        for(j=1;j<=n;j++){
          if(j==half) cout<<"*";
          else if(j==n) cout<<"*";
          else if(i==n && j<half) cout<<"*";
          else cout<<" ";
        }
      }
      cout<<endl;
    }
  return 0;
}
