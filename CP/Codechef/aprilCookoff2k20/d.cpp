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

struct point{
  int type;
  int x;
  int y;
};

bool comp(point p1, point p2){
  return p1.x < p2.x;
}
int main(){

    int t;
    cin>>t;

    while(t--){
      int h,n;
      cin>>h>>n;
      int i;
      vector<point> v;
      v.reserve(n);
      int x,y,type,j;
      for(i=0;i<n;i++){
        cin>>type>>x>>y;
        point p;
        p.type= type;
        p.x=x;
        p.y=y;
        v.push_back(p);
      }
      sort(v.begin(), v.end(), comp);

      int yMin=INT_MAX, yMax=INT_MIN;
      int count=0;
      for(i=0;i<n;i++){
        count=0;
        yMin=INT_MAX; yMax=INT_MIN;
        for(j=0;j<n;j++){
          if(j==i){
            yMin=INT_MAX; yMax=INT_MIN;
            continue;
          }
          if(v[j].type == 1 && v[j].y<yMin) {
            yMin=min(v[j].y, yMin);
            count++;
          }
          if(v[j].type == 0 && v[j].y>yMax) {
            yMax=max(y, yMax);
            count++;
          }
        }
        cout<<count<<" ";
      } cout<<endl;
    }
  return 0;
}
