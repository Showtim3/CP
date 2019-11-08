#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

#define li long int
#define ll long long
#define lli long long int

using namespace std;

double calculateDistance(lli x1,lli y1,lli x2 ,lli y2){
  return pow((x2-x1),2) - pow((y2-y1),2);
}

int main(){

    int t;
    cin>>t;

    int n,m,k;
    li i;
    lli a,b;
    lli x,y;
    vector<pair<lli, lli> > setA;
    vector<pair<lli, lli> > setB;
    vector<pair<lli, lli> > setc;

    while(t--){
      cin>>x>>y;
      cin>>n>>m>>k;

      for(i=0;i<n;i++){
        cin>>a>>b;
        setA.push_back(make_pair(a,b));
      }
      for(i=0;i<m;i++){
        cin>>a>>b;
        setB.push_back(make_pair(a,b));
      }
      for(i=0;i<k;i++){
        cin>>a>>b;
        setC.push_back(make_pair(a,b));
      }
      double ans1 = consumeData(x,y,setA,setB,setC);
      double ans2 = consumeData(x,y,setB,setA,setC);
    }
  return 0;
}



double consumeData(int sX, int sY, vector<pair<lli, lli> > setA, vector<pair<lli, lli> > setB, vector<pair<lli, lli> > setC) {
  map<pair<lli,lli>, double> distanceAfromS;
  for(auto x: setA) {
    distanceAfromS.insert(make_pair(x.first,x.second)) = calculateDistance(sX,sY,x.fist,x.second);
  }

  double minDistance = numeric_limits<double>::max() - 1;
  map<pair<lli,lli>, double> distanceCfromB;
  for(auto x: setB){
    for(auto y: setC){
      d = calculateDistance(x.first,x.second,y.fist,y.second);
      if( d < minDistance) {
        minDistance = b;
      }
      distanceCfromB.insert(make_pair(x.first,x.second), d);
    }
  }

  double ansDistance=numeric_limits<double>::max() - 1;
  double tempDistance;
  
  for(auto x: setA){
    for(auto y: setB){
      d = calculateDistance(x.first,x.second,y.first,y.second);
      tempDistance = d + distanceAfromS[make_pair(x.first,x.second)] + distanceCfromB[make_pair(y.first,y.second)];

      if(tempDistance < ansDistance){
        ansDistance =  tempDistance;
      }
    }
  }

  return ansDistance;
}
