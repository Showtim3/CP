#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include<list>
#include<stack>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

class Graph {
public:
    list<int> adjList[10];
    map<int,bool> m;
    Graph(){

    }
    void addEdge(int u, int v) {
      cout<<u<<" -> "<<v<<endl;
      adjList[u].push_back(v);
      // adjList[v].push_back(u);
    }

    void printAdjancyList(int n) {
      for(int i=0;i<8;i++){
        cout<<i<<" -> ";
        for(auto y: adjList[i]){
          cout<<y<<" ";
        }
        cout<<endl;
      }
    }

    void DFStraversal() {
      for(int i=0;i<8;i++){
        if(m.find(i)== m.end()){
          // m.insert(make_pair(i,true));
          DFStraversalWithStack(i);
        }
      }
    }

    void DFStraversalWithStack(int root) {
      stack<int> s;
      s.push(root);
      // m.insert(make_pair(root,true));

      while(!s.empty()){
          int ele = s.top();
          s.pop();
          // cout<<ele;

          if(m.find(ele)==m.end()){
            cout<<ele<<" ";
            m.insert(make_pair(ele,true));
          }

          for(auto x: adjList[ele]) {

            if(m.find(x)==m.end()){
            s.push(x);
          }
        }
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
      cout<<"Printing the matrix"<<endl;
      g.printAdjancyList(8);
      cout<<"Printing DFS"<<endl;
      g.DFStraversal();

  return 0;
}
