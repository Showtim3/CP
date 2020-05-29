#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

class disjointSet{
public:
  vector<int> parent;
  int totalComponents;

  void init(int n){
    parent.resize(n);
    for(int i=0;i<n;i++){
      parent[i] = i;
    }
    totalComponents=n;
  }
  int getParent(int x){
    if(x==parent[x]){
      return x;
    } else {
      parent[x] = getParent(parent[x]);
      return parent[x];
    }
  }
  void unite(int x, int y){
    int superParentX = getParent(x);
    int superParentY = getParent(y);
    if(superParentX!=superParentY){
      parent[superParentX] = superParentY;
    }
  }
};
int main(){

    int t;
    cin>>t;

    while(t--){

    }
  return 0;
}
