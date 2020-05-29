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


void getSubs(vector<lli> v, lli n){
  lli i;
  for(i=0;i<n;i++){
    if(v[i]%2!=0){
      v[i]=0;
    } else{
      if(v[i]%4==0){
        v[i]=2;
      } else {
        v[i]=1;
      }
    }
  }
  lli sum=0;
  for(i=0;i<n;i++){
    sum+=v[i];
    v[i]=sum;
  }
  lli k=1; lli count=0;
  map<lli, lli> m;
  for(i=0;i<n;i++){
    if(v[i]==k){
      count++;
    }
    if(m.find(v[i]-k)!=m.end()){
      count+=m[v[i]-k];
    }
    m[v[i]]++;
  }

  lli total = ((lli)n*(n+1))/2;
  total = total - count;
  cout<<total<<endl;
  return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
      lli n,i;
      cin>>n;
      vector<lli> v;
      v.reserve(n);
      for(i=0;i<n;i++){
        lli ele;
        cin>>ele;
        if(ele<0) ele*=-1;
        v.push_back(ele);
      }
      getSubs(v,n);
    }
  return 0;
}
