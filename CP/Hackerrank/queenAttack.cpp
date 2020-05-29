#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int> > obstacles) {
  r_q-=1;
  c_q-=1;
  set<pair<int, int> > obs;
  int i;
  for(i=0;i<k;i++){
    obs.insert(make_pair(obstacles[i][0]-1,obstacles[i][1]-1));
  }

  //right
  int r = r_q;
  int c = c_q;
  int cnt=0;

  // right
  while(c<n && !obs.count(make_pair(r,c))){
    cnt++;
    c++;
  }
  r = r_q; c = c_q;
  // left
  while(c>=0 && !obs.count(make_pair(r,c))){
    cnt++;
    c--;
  }
  //up
  r = r_q; c = c_q;
  while(r>=0 && !obs.count(make_pair(r,c))){
    cnt++;
    r--;
  }
  //down
  r = r_q; c = c_q;
  while(r<n && !obs.count(make_pair(r,c))){
    cnt++;
    r++;
  }
  //top right
  r = r_q; c = c_q;
  while(r>=0 && c<n && !obs.count(make_pair(r,c))){
    cnt++;
    r--; c++;
  }
  //top left
  r = r_q; c = c_q;
  while(r>=0 && c>=0 && !obs.count(make_pair(r,c))){
    cnt++;
    r--; c--;
  }
  // bottom left
  r = r_q; c = c_q;
  while(r<n && c>=0 && !obs.count(make_pair(r,c))){
    cnt++;
    r++; c--;
  }
  // bottom right
  r = r_q; c = c_q;
  while(r<n && c<n && !obs.count(make_pair(r,c))){
    cnt++;
    r++; c++;
  }

  return cnt-8;

}
int main(){

    int n,k;
    cin>>n>>k;
    int rq,cq;
    cin>>rq>>cq;
    int i,j;
    int r,c;
    vector<vector<int> > obstacles;
    obstacles.reserve(k);
    for(i=0;i<k;i++){
      cin>>r>>c;
      vector<int> p;
      p.push_back(r); p.push_back(c);
      obstacles.push_back(p);
    }
    
    cout<<queensAttack(n,k,rq,cq,obstacles)<<endl;
    return 0;
}
