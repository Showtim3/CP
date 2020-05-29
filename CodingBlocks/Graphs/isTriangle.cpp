#include <iostream>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int
using namespace std;


int main(){
  int n;
  cin>>n;
  vector<int> v;
  v.resize(n+1);
  int i;
  for(i=1;i<=n;i++){
    cin>>v[i];
  }
  bool ans=0;
  for(i=1;i<=n;i++){
    if(v[v[v[i]]]==i){
      ans=1;
      break;
    }
  }
  cout<< (ans ? "YES" : "NO")<<endl;
  return 0;
}
