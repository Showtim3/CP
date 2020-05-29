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
    int i,j;
    vector<string> v;
    for(i=0;i<n;i++){
      string s;
      cin>>s;
      v.push_back(s);
    }
    int srcX, srcY, destX, destY;
    cin>>srcX>>srcY>>destX>>destY;
    queue<pair<int, int> > q;

    vector<pair<int, int> >dirs;
    dirs.push_back(make_pair(1,0));
    dirs.push_back(make_pair(-1,0));
    dirs.push_back(make_pair(0,1));
    dirs.push_back(make_pair(0,-1));

    int ans=0;
    int step=1;
    set<pair<int, int> >m;
    bool found=false;
    q.push(make_pair(srcX,srcY));
    map<pair<int, int>, int> distance;
    // for(i=0;i<n;i++){
    //   for(j=0;j<n;j++){
    //     cout<<i<<" "<<j<<" "<<v[i][j]<<endl;
    //   }
    // }

    distance.insert(make_pair(make_pair(srcX, srcY),0));
    while(!q.empty()){
      auto pt = q.front();
      q.pop();
      m.insert(pt);
      // cout<<pt.first<<" "<<pt.second<<endl;
      step=distance[make_pair(pt.first, pt.second)];
      for(auto x: dirs) {
        int dx=x.first;
        int dy=x.second;
        int x1 = pt.first;
        int y1 = pt.second;
        while(true){
          x1+=dx;
          y1+=dy;
          // cout<<x1<<" "<<y1<<endl;
          if(x1<0 || x1>=n || y1<0 || y1>=n || v[x1][y1]=='X'){
            // cout<<"Breaking";
            break;
          }
          if(!m.count(make_pair(x1,y1))){
              // cout<<"Inserting ";
              // cout<<x1<<" "<<y1<<endl;
              // cout<<v[x1][y1]<<endl;
              q.push(make_pair(x1,y1));
              m.insert(make_pair(x1,y1));
              distance.insert(make_pair(make_pair(x1,y1), step+1));
          }
          if(x1==destX && y1==destY){
            found=true;
            break;
          }
          }
        }
      if(found) break;
    }

  cout<<distance.find(make_pair(destX,destY))->second<<endl;
  return 0;
}
