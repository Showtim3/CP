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

    int t;
    cin>>t;

    while(t--){
      li n;
      cin>>n;

      li i;
      vector<li> v;
      for(i=0;i<n;i++){
        li ele; cin>>ele;
        v.push_back(ele);
      }
      sort(v.begin(), v.end());
      int k=0;
      bool ans=1;
      i=0;
      while(i<n){
        if(v[i]-k<=0){
          ans=0;
          break;
        } else {
          k+=1;
        }
        i++;
        if(i%6==0){
          k+=1;
        }
      }
      if(ans){
        cout<<"Rick now go and save Carl and Judas"<<endl;
      } else{
        cout<<"Goodbye Rick"<<endl;
        cout<<i<<endl;
      }
      v.clear();
    }
  return 0;
}
