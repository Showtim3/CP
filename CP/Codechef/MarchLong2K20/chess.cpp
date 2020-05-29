#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

void printPoints(int a, int b){
  cout<<a<<" "<<b<<endl;
}

void printDefaultPath(){
  vector<pair<int, int> > points = {
     {8,8},
     {7,7}, {6,8} , {8,6}, {7,7},
     {6,6}, {4,8} , {8,4}, {6,6},
     {5,5}, {2,8} , {8,2}, {5,5},
     {4,4}, {1,7} , {7,1}, {4,4},
     {3,3}, {1,5} , {5,1}, {3,3},
     {2,2}, {1,3} , {3,1}, {2,2},
     {1,1}
 };

 for(int i=0;i<points.size();i++){
   printPoints(points[i].first, points[i].second);
 }
 return;
}

void printPath(int r, int c){
  if(r!=c){
    int sum = (r+c)/2;
    cout<<27<<endl;
    printPoints(sum,sum);
  } else {
    cout<<26<<endl;
  }
  printDefaultPath();
  return;
}

int main(){

    int t;
    cin>>t;

    while(t--){
      int r,c;
      cin>>r>>c;
      printPath(r,c);
      cout<<endl;
    }
  return 0;
}
