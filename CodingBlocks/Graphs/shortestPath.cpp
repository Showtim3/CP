#include <iostream>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
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

  void shortestPath(int src){
    queue<int> q;
    vector<int> distance;
    int i;

    for(i=0;i<adjList.size();i++){
      distance.push_back(INT_MAX);
    }

    distance[src] = 0;
    q.push(src);
    while(!q.empty()){
      int parent = q.front();
      q.pop();
      for(auto neighbour: adjList[parent]){
        if(distance[neighbour]==INT_MAX){
          distance[neighbour]=distance[parent]+1;
          q.push(neighbour);
        }
      }
    }
    for(auto x: adjList) {
      cout<<"Distance of "<<x.first<<" is: "<<distance[x.first]<<endl;
    }
  }
};

int main(){
  Graph g;
  g.addEdge(0,1);
  g.addEdge(0,4);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(4,2);
  g.addEdge(4,3);
  g.addEdge(3,5);
  g.print();
  g.shortestPath(1);

  return 0;
}
