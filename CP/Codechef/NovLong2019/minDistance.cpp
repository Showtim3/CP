#include <iostream>
#include <iomanip>
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
  return sqrt((pow((x2-x1),2) + pow((y2-y1),2)));
}

double consumeData(int sX, int sY, vector<pair<lli, lli> > setA, vector<pair<lli, lli> > setB, vector<pair<lli, lli> > setC) {
  map<pair<lli,lli>, double> distanceAfromS;
  for(auto x: setA) {
    distanceAfromS.insert(make_pair(make_pair(x.first,x.second),calculateDistance(sX,sY,x.first,x.second)));
  }

  double minDistance = numeric_limits<double>::max() - 1;
  double d;
  map<pair<lli,lli>, double> distanceCfromB;
  for(auto x: setB){
    minDistance = numeric_limits<double>::max() - 1;
    for(auto y: setC){
      d = calculateDistance(x.first,x.second,y.first,y.second);
      if( d < minDistance) {
        minDistance = d;
      }
    }
    distanceCfromB.insert(make_pair(make_pair(x.first,x.second), minDistance));
  }

  double ansDistance=numeric_limits<double>::max() - 1;
  double tempDistance;

  for(auto x: setA){
    for(auto y: setB){
      tempDistance = calculateDistance(x.first,x.second,y.first,y.second) + distanceAfromS[make_pair(x.first,x.second)] + distanceCfromB[make_pair(y.first,y.second)];

      if(tempDistance < ansDistance){
        ansDistance =  tempDistance;
      }
    }
  }

  distanceAfromS.clear();
  distanceCfromB.clear();
  return ansDistance;

}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


    int t;
    cin>>t;

    int n,m,k;
    li i;
    lli a,b;
    lli x,y;
    vector<pair<lli, lli> > setA;
    vector<pair<lli, lli> > setB;
    vector<pair<lli, lli> > setC;

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
      std::cout << std::fixed;
      ans1 > ans2 ? cout<<setprecision(10)<<ans2<<endl : cout<<setprecision(10)<<ans1<<endl;
      setA.clear();
      setB.clear();
      setC.clear();
    }
  return 0;
}
