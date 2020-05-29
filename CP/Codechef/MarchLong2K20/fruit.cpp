#include <iostream>
#include <set>
#include <climits>
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
      int n,m;
      cin>>n>>m;
      int type[100], price[100];
      map <int,int> m1;
      int i;

      for(i=0;i<n;i++){
        cin>>type[i];
      }
      for(i=0;i<n;i++){
        cin>>price[i];
      }
      for(i=0;i<n;i++){
        if(!m1.count(type[i])){
          m1.insert(make_pair(type[i], price[i]));
        } else{
          m1.find(type[i])->second+=price[i];
        }

      }
      int minPrice=INT_MAX;


      for(auto x: m1){
        // cout<<x.first<<" "<<x.second<<endl;
        minPrice=min(minPrice,x.second);
      }
      cout<<minPrice<<endl;
      m1.clear();
    }
  return 0;
}
