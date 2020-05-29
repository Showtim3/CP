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

int main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
      lli n;
      cin>>n;
      lli i;
      vector<lli> v;
      for(i=0;i<n;i++){
        lli ele;
        cin>>ele;
        v.push_back(ele);
      }

      if(is_sorted(v.begin(), v.end())){
        cout<<1<<endl;
      } else {
        map<lli, vector<lli> > m;
        for(i=0;i<n;i++){
          m[v[i]].push_back(i);
        }

        map<lli, vector<lli> >::iterator it = m.begin();
        map<lli, vector<lli> >::iterator it2 = m.begin();
        int count=0;
        it2++;
        lli prevIndex = (it->second)[0];
        while(it!=m.end() && it2!=m.end()) {
          bool valid=0;
          for(auto y: it2->second){
            if(y>prevIndex){
              prevIndex=y;
              valid=1;
              break;
            }
          }
          if(!valid) {
            count++;
            prevIndex=(it2->second)[0];
          }
          it++;
          it2++;
        }
        cout<<count+1<<endl;
        m.clear();
      }
      v.clear();
    }
  return 0;
}
