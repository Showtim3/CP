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
    adjList[v].push_back(u);
  }

  void print(){
    for(auto x: adjList){
      cout<<x.first<<" ";
      for(int i=0;i<x.second.size();i++){
        cout<<x.second[i]<<" ";
      } cout<<endl;
    }
  }

  void printBfs(int src){
    queue<int> q;
    q.push(src);
    set<int> visited;
    while(!q.empty()){
      int top=q.front();
      visited.insert(top);
      cout<<top<<" ";
      q.pop();
      for(int i=0;i<adjList[top].size();i++){
        if(!visited.count(adjList[top][i])){
            visited.insert(adjList[top][i]);
            q.push(adjList[top][i]);
        }

      }
    }
    cout<<endl;
  }
};

int main(){
  Graph g;
  g.addEdge(1,2);
  g.addEdge(1,3);
  g.addEdge(3,6);
  g.print();
  g.printBfs(1);
  return 0;
}
