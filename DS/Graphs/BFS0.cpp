// Implementing BFS in a graph

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <list>
#include <cmath>
#include <queue>
#define li long int
#define ll long long
#define lli long long int

using namespace std;


class Graph {
public:
    list<int> adjList[10];
    Graph(){

    }
    void addEdge(int u, int v) {
      cout<<u<<" -> "<<v<<endl;
      adjList[u].push_back(v);
      adjList[v].push_back(u);
    }

    void printAdjancyMatix(int n) {
      for(int i=0;i<8;i++){
        cout<<i<<" -> ";
        for(auto y: adjList[i]){
          cout<<y<<" ";
        }
        cout<<endl;
      }
    }

    void bfsTraversal(int s){
      queue<int> q;
      q.push(s);
      map<int, bool> m;
      m.insert(make_pair(s,true));

          while(!q.empty()){
            int front = q.front();
            cout<<front<<" ";
            q.pop();
            for(auto x: adjList[front]){
              if(m.find(x)==m.end()){
                m.insert(make_pair(x,true));
                q.push(x);
              }
          }
        }
        
      return;
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
    cout<<"Printing the matrix"<<endl;
    g.printAdjancyMatix(8);
    cout<<"Printing BFS"<<endl;
    g.bfsTraversal(0);
  return 0;
}
