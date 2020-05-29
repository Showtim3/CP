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

class Graph{
public:
  map<int, vector<int> >m;
  vector<int> distance;
  vector<bool> visited;
  Graph(int n){
    visited.resize(n+1);
    distance.resize(n+1);
  }
  void addEdge(int a, int b){
    m[a].push_back(b);
  }
  void dijskta(int x, int d){
      distance[x]=d;
      visited[x]=true;
      for(auto y: m[x]){
        if(!visited[y])
          dijskta(y, d+1);
      }
  }
};

int main(){
    int n;
    cin>>n;
    Graph g(n);
    int t=n-1;
    while(t--){
      int a,b;
      cin>>a>>b;
      g.addEdge(a,b);
    }
    int q;
    cin>>q;
    vector<int> index;
    while(q--){
      int x; cin>>x;
      index.push_back(x);
    }
    g.dijskta(1,0);
    int ans=INT_MAX;
    int ind;
    for(auto x: index){
      if(ans>g.distance[x]){
        ans=g.distance[x];
        ind=x;
      }
    }
    cout<<ind<<endl;
  return 0;
}
