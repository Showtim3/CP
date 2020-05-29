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

map<int, int> getPrimeFactorsCount(li n){
  map<int, int> pf;

  if(n%2==0){
    while(n%2==0){
        n/=2;
        pf[2]++;
    }
  }
  for(li i=3;i<=sqrt(n);i++){
    if(n%i==0){
      while(n%i==0){
          n/=i;
          pf[3]++;
      }
    }
  }
  return pf;
}

int main(){

    li a,b;
    cin>>a>>b;

    map<int, int> pf1 = getPrimeFactorsCount(a);
    map<int, int> pf2 = getPrimeFactorsCount(b);
    int ans=0;
    if(pf1.size()!=pf2.size()){
      ans=-1;
    } else {
        map<int, int>::iterator it1=pf1.begin();
        map<int, int>::iterator it2=pf2.begin();
        int count=0;
        for(;it1!=pf1.end();it1++, it2++){
          // cout<<it1->first<<" "<<it1->second<<endl;
          // cout<<it2->first<<" "<<it2->second<<endl;
          if(!(it1->first==2 || it1->first==3) && it1->second!=it2->second){
            ans=-1;
            break;
          }
          if((it1->first==2 || it1->first==3) && it1->second > it2->second){
            ans=-1;
            break;
          } else if((it1->first==2 || it2->first==3)){
            ans+=it2->second - it1->second;
          }
        }
    }

    cout<<ans<<endl;


  return 0;
}
