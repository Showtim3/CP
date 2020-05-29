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


bool comparator(pair<int, int> a, pair<int, int> b){
  return a.second<b.second;
}
int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      vector<pair<int,int> > v;
      int i;
      for(i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
      }
      sort(v.begin(), v.end(), comparator);
      int ans=1;
      int lastEnd=v[0].second;
      for(i=1;i<v.size();i++){
        if(v[i].first>lastEnd){
          ans++;
          lastEnd = v[i].second;
        }
      }
      cout<<ans<<endl;
    }
  return 0;
}
