#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
  return  a.first< b.first;
}

int main(){
    int s,n;
    cin>>s>>n;

    vector<pair<int, int> > v;
    v.resize(n);
    int i;
    for(i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      v[i]=make_pair(a,b);
    }
    sort(v.begin(), v.end(), comp);
    bool ans=1;
    for(i=0;i<v.size();i++){
        if(v[i].first<s){
          s+=v[i].second;
        } else {
          ans=0;
          break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  return 0;
}
