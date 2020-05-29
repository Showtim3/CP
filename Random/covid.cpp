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
      int n;
      cin>>n;
      vector<int> v;
      int i;
      for(i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
      }
      int j=0;
      i=0;
      bool found=false;
      while(i<n && j<n){
        if(i<n && v[i]!=1){
          i++;
        } else {
          j=i+1;
          while(j<n && v[j]!=1){
            j++;
          }
          if(j>=n){
            break;
          }
          if(j-i<6){
            found=true;
            break;
          } else {
            i=j;
          }
        }
      }
      if(!found){
        cout<<"YES"<<endl;
      } else cout<<"NO"<<endl;
      v.clear();
    }
  return 0;
}
