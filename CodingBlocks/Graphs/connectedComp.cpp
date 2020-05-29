#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Graph{
	public:
	map<int, vector<int> >v;
	void addEdge(int a,int b){
		v[a].push_back(b);
		v[b].push_back(a);
	}
	void dfsUtil(int x, bool visited[]){
		if(visited[x]) return;
    visited[x]=true;
		for(auto y: v[x]){
			dfsUtil(y, visited);
		}
	}
	int dfs(int n){
		bool *visited = new bool[n+1];
		for(int i=1;i<=n;i++){
			visited[i]=false;
		}
		int connectedComponents=0;
		for(int i=1;i<=n;i++){
			if(visited[i]) continue;
			else {
				connectedComponents++;
				dfsUtil(i, visited);
			}
		}
		return connectedComponents;
	}

  void print(){
    for(auto x: v){
      cout<<x.first<<"->";
      for(auto y: x.second){
        cout<<y<<" ";
      }
      cout<<endl;
    }
  }
};
int main(){
	int n,q;
	cin>>n>>q;
	Graph g;
	while(q--){
		int a,b;
		cin>>a>>b;
		g.addEdge(a,b);
	}

	cout<<g.dfs(n)<<endl;
	return 0;
}
