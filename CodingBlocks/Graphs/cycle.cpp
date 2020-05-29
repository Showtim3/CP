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
  int vertices;
  void addEdge(int u, int v){
    adjList[u].push_back(v);
  }

  bool _cycleExists(int node, bool *visited, bool *st){
    visited[node]=1;
    st[node]=1;

    for(auto x: adjList[node]){
      if(st[x]){
        return true;
      } else if(!visited[x]){
        visited[x] = true;
        bool cycleFound = _cycleExists(x, visited, st);
        if(cycleFound) return true;
      }
    }
    st[node]=0;
    return 0;
  }
  bool cycleExists(){
    bool *visited = new bool[vertices];
    bool *st = new bool[vertices];
    for(int i=0;i<vertices;i++){
      visited[i]=st[i]=false;
    }
    return _cycleExists(0,visited, st);

  }
};

int main(){
  Graph g;
  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(3,4);
  g.addEdge(4,5);
  g.addEdge(1,5);
  g.addEdge(5,6);
  // g.addEdge(4,2);
  g.vertices=7;
  // g.print();
  // g.printBfs(1);
  cout<<g.cycleExists()<<endl;
  return 0;
}
