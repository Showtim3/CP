#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
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

    int n,m;
    cin>>n>>m;
    unordered_map<string, string> mp;
    while(m--){
      string l1, l2;
      cin>>l1>>l2;

      mp.insert(make_pair(l1,l2));
    }
    vector<string> v;
    while(n--){

      string s;
      cin>>s;
      v.push_back(s);
    }
    for(auto x: v){
      for(auto y: mp){
        if(y.first==x){
          if(y.first.length()<=y.second.length()){
            cout<<y.first<<" ";
          } else cout<<y.second<<" ";
        }
      }
    }
  return 0;
}
