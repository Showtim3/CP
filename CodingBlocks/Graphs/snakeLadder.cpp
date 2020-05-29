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

  void minMoves(int src){
    queue<int> q;

    vector<int> distance;
    vector<int> parent;
    distance.resize(37);
    parent.resize(37);
    for(int i=0;i<=36;i++){
      distance[i] = INT_MAX;
    }

    q.push(src);
    distance[src]=0;
    parent[src] =src;

    while(!q.empty()){

      int node = q.front();
      q.pop();

      for(auto child: adjList[node]){
        if(distance[child]==INT_MAX){
          q.push(child);
          distance[child]=distance[node]+1;
          parent[child] = node;
        }
      }
    }
    int i=0;
    for(auto x: distance) {
      cout<<i<<" Distance: "<<x<<endl;
      i++;
    }

    int p=36;
    while(p!=0){
      cout<<p<<" <- ";
      p = parent[p];
    }

  }
};

int main(){
  Graph g;
  int board[50] = {0};

  board[2]=13;
  board[5]=2;
  board[9]=18;
  board[18]=11;
  board[17]=-13;
  board[20]=-14;
  board[24]=-8;
  board[25]=10;
  board[32]=-2;
  board[34]=-22;

  for(int i=0;i<36;i++){
    for(int j=1;j<=6;j++){
      int sum = i+j;
      sum+=board[sum];

      if(sum<=36){
        g.addEdge(i, sum);
      }
    }
  }

  g.minMoves(0);




  return 0;
}
