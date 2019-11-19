// Implementing BFS in a graph

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;


class Graph {
public:
    int adjMatrix[10][10];
    Graph(){
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
          adjMatrix[i][j] = 0;
        }
      }
    }
    void addEdge(int u, int v) {
      cout<<u<<" -> "<<v<<endl;
      adjMatrix[u][v] = 1;
      adjMatrix[v][u] = 1;
    }

    void printAdjancyMatix(int n) {
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
      }
    }

    void bfsTraversal(int s) {
      queue<int> q;
      q.push(s);
      map<int> m;
      while(!q.empty()){
        if(m.find(adj[i])) {

        for(i=0;i<n;i++){
          if(adj[i][j]==1){
            q.push(j);
          }
        }
      }
        q.pop();
      }
    }
};

int main(){

    Graph g;
    g.addEdge('a'-97,'b'-97);
    g.addEdge('a'-97,'f'-97);
    g.addEdge('a'-97,'g'-97);
    g.addEdge('b'-97,'c'-97);
    g.addEdge('b'-97,'d'-97);
    g.addEdge('d'-97,'e'-97);
    g.addEdge('g'-97,'h'-97);
    g.printAdjancyMatix(8);
  return 0;
}
