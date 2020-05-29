#include <iostream>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <list>
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

  void dfs(int src){
    cout<<"Printing DFS"<<endl;
    set<int> visited;
    list<int> ordering;
    _dfs(src, visited, ordering);
    cout<<endl;

    cout<<"Ordering"<<endl;

    for(auto x: ordering){
      cout<<x<<" -> ";
    }
  }

  void _dfs(int src, set<int> &visited, list<int> &ordering){
    if(!visited.count(src)){
      cout<<src<<" ";
      visited.insert(src);
          for(auto x: adjList[src]){
            if(!visited.count(x)){
              _dfs(x, visited, ordering);
            }
          }
    }
          ordering.push_front(src);
  }
};

int main(){
  Graph g;
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(0, 3);
  g.addEdge(2, 3);
  g.addEdge(2, 7);
  g.addEdge(2, 4);
  g.addEdge(2, 5);
  g.addEdge(3, 6);
  g.addEdge(6, 7);
  g.addEdge(7, 8);
  g.addEdge(4, 8);
  g.addEdge(5, 8);

  g.print();
  g.dfs(0);
  return 0;
}
