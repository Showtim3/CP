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


bool possible(vector<int> a,vector<int> b, int s){
  if(a[s]){
    return 1;
  }
  if(!a[s] && !b[s]){
    return 0;
  }
  if(b[s]){
    for(int i=s;i<a.size();i++){
      if(a[i]&&b[i]){
        return 1;
      }
    }
  }
  return 0;
}
int main(){

    int n,s;
    cin>>n>>s;
    vector<int>a,b;
    a.resize(n);
    b.resize(n);
    int i;
    s-=1;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    for(i=0;i<n;i++){
      cin>>b[i];
    }

    if(a[0]==0) cout<<"No"<<endl;
    else {
      if(possible(a,b,s)) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  return 0;
}
