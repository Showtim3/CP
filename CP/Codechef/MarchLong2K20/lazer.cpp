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

    int t;
    cin>>t;

    while(t--){
      int n,i,q;
      cin>>n>>q;
      vector<int> v;
      v.reserve(n+1);
      int ele;
      v.push_back(-1);
      for(i=1;i<n+1;i++){
        cin>>ele;
        v.push_back(ele);
      }

      // vector<pair> range;
      // range.reserve(n+1);
      // for(i=1;i<n+1;i++){
      //   range.push_back(v[i],v[i+1]);
      // }

      int x1,x2,y,j;

      while(q--) {
        int count = 0;
        cin>>x1>>x2>>y;
        for(j=x1;j<x2;j++){
          cout<<j<<" "<<j+1<<endl;
          if((v[j]>=y && v[j+1]<=y) || (v[j]<=y && v[j+1]>=y)){
            // cout<<"First true"<<endl;
            if(!(j==x2 && v[j]==y) || (j+1==x1 && v[j+1]==y)){
              // cout<<"Second true"<<endl;
                count++;
            }
          }
        }
        cout<<count<<endl;
      }
      v.clear();
    }
  return 0;
}
