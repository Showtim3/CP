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

int counter=0;

void printSubset(vector<int> v, int sum, int i){
  if(counter==2) return;
  if(i==v.size()){
    if(sum==0) counter++;
    return;
  }
  printSubset(v, sum,i+1);
  if(counter==2) return;
  printSubset(v,sum+v[i],i+1);
}
int main(){

  int t;
  cin>>t;
  while(t--){
    counter=0;
    int n;
    cin>>n;
    vector<int> a;
    a.reserve(n);
    int i,j,k;
    for(i=0;i<n;i++){
      int ele; cin>>ele; a.push_back(ele);
    }
    printSubset(a, 0, 0);
    if(counter==2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    a.clear();
  }
  return 0;
}
