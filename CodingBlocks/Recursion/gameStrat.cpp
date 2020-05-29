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


int optimalStart(vector<int> v, int i, int j) {
    if(i>j){
      return 0;
    }
    if(i==j){
      return v[i];
    }

    int ansLeft =  v[i] + min(optimalStart(v,i+2,j), optimalStart(v,i+1,j-1));
    int ansRight = v[j] + min(optimalStart(v,i+1,j-1), optimalStart(v,i,j-2));
    return max(ansLeft, ansRight);
}

int main(){
  int n,i;
  cin>>n;
  vector<int> v;
  v.resize(n);
  for(i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<optimalStart(v, 0, n-1)<<endl;
  return 0;
}
