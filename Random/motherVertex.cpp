#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <queue>
#define li long int
#define ll long long
#define lli long long int

using namespace std;


class Graph {
public:
  map<int, vector<int> >adjList;
  int vertices;

  void addEdge(int u, int v) {
    adjList[u].push_back(v);
  }

  void print(){
    for(auto x: adjList){
      cout<<x.first<<" : ";
      for(auto y: x.second){
        cout<<y<<" ";
      } cout<<endl;
    }
  }

  set<int> getMotherVertex(){
    queue<int> q;
    int i;
    vector<int> visited;
    visited.resize(vertices);
    set<int> motherVertex;
    for(auto x: adjList){
      q.push(x.first);
      for(i=0;i<vertices;i++){
        visited[i] = false;
      }
      int count=1;
      visited[x.first]=true;
      // cout<<"Checking for "<<x.first<<" ";
      while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto y: adjList[front]){
          if(!visited[y]){
            // cout<<" "<<y;
            visited[y]=true;
            q.push(y);
            count++;
          }
        }
      }
      if(count==vertices){
        motherVertex.insert(x.first);
      }
    }
    return motherVertex;
  }
};
int main(){
  Graph g;
  // g.addEdge(0,1);
  // g.addEdge(0,2);
  // g.addEdge(1,3);
  // g.addEdge(4,1);
  // g.addEdge(5,2);
  // g.addEdge(5,6);
  // g.addEdge(6,4);
  // g.addEdge(6,0);
  // g.vertices = 7;

  g.addEdge(0,2);
  g.addEdge(0,3);
  g.addEdge(1,0);
  g.addEdge(2,1);
  g.addEdge(3,4);

  g.vertices = 5;

  set<int>ans = g.getMotherVertex();
  for(auto x: ans){
    cout<<x<<" ";
  }
  return 0;
}
