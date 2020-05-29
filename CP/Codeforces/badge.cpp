#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> v;
    v.resize(n+1);
    int i;
    for(i=1;i<=n;i++){
      cin>>v[i];
    }
    vector<bool> visited;
    visited.resize(n+1);
    for(i=1;i<=n;i++){
      visited[i]=0;
    }
    for(i=1;i<=n;i++){
      visited[i]=true;
      int point = i;
      // cout<<point<<" -> ";
      while(1){
          point = v[point];
          // cout<<point<<" -> ";
          if(visited[point]) break;
          else visited[point] = 1;
      } cout<<point<<" ";
      for(int k=1;k<=n;k++){
        visited[k]=0;
      }
    } cout<<endl;
  return 0;
}
