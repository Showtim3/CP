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

int main(){
  li n,i,j;
  vector<li> v;

  cin>>n;
  v.resize(n);

  for(i=0;i<n;i++){
    cin>>v[i];
  }
  li minElement,index;
  bool minFound=false;
  for(i=0;i<n-1;i++){
    minElement=v[i];
    minFound=false;
    for(j=i+1;j<n;j++){
      if(v[j]<minElement){
        index=j;
        minElement = v[j];
        minFound=true;
      }
    }
    if(minFound) swap(v[i],v[index]);
  }

  for(i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
  return 0;
}
