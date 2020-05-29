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



class Graph{
public:
  map<int,vector<int> > adjList;

  void addEdge(int u, int v){
    adjList[u].push_back(v);
  }

  void print(){
    for(auto x: adjList){
      cout<<x.first<<" ";
      for(int i=0;i<x.second.size();i++){
        cout<<x.second[i]<<" ";
      } cout<<endl;
    }
  }

  void initEdges(vector<string> grid, int n){

    int k=0,i,j;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        cout<<grid[i][j];
      }
    }
  }
};

int main(){
  Graph g;
  int n,i;
  vector<string> grid;
  cin>>n;
  string s;
  for(i=0;i<n;i++){
    cin>>s;
    grid.push_back(s);
  }
  g.initEdges(grid, n);

  return 0;
}
