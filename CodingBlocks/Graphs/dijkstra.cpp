#include <iostream>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int
using namespace std;

template<typename T>
class Graph{
public:
  unordered_map<T,list<pair<T, int> > > m;

  void addEdge(T u, T v, int d, bool isBi=true){
    m[u].push_back(make_pair(v,d));
    if(isBi){
        m[v].push_back(make_pair(u,d));
    }
  }

  void print(){
    for(auto x: m){
      cout<<x.first<<" ";
      for(auto y: x.second){
        cout<<"("<<y.first<<" "<<y.second<<")";
      } cout<<endl;
    }
  }

  void dijkstra(T src){
    unordered_map<T, int> distance;
    for(auto j: m){
      distance[j.first] = INT_MAX;
    }
    set<pair<int, T> > s;
    distance[src] = 0;
    s.insert(make_pair(0, src));

    while(!s.empty()){
      auto p = *(s.begin());
      T node = p.second;
      int nodeDist = p.first;
      s.erase(s.begin());
      for(auto childPair: m[node]){
          if(nodeDist + childPair.second < distance[childPair.first]){
            T dest = childPair.first;
            auto f = s.find(make_pair(distance[dest], dest));
            if(f!=s.end()){
              s.erase(f);
            }
            distance[dest] = nodeDist + childPair.second;
            s.insert(make_pair(distance[dest], dest));
          }
      }
    }
    for(auto d: distance){
      cout<<d.first<<" is located at distance of "<<d.second<<endl;
    }
  }
};

int main(){
  Graph<string> g;
  g.addEdge("Amritsar","Delhi",1);
  g.addEdge("Amritsar","Jaipur",4);
  g.addEdge("Jaipur","Delhi",2);
  g.addEdge("Jaipur","Mumbai",8);
  g.addEdge("Bhopal","Agra",2);
  g.addEdge("Mumbai","Bhopal",8);
  g.addEdge("Agra","Delhi",8);

  // g.print();
  g.dijkstra("Amritsar");
  return 0;
}
