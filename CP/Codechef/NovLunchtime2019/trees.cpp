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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int t;
    cin>>t;

    int n,i;
    li ele;
    while(t--){
      cin>>n;
      set<int> s;
      for(i=0;i<n;i++){
        cin>>ele;
        s.insert(ele);
      }
      li ans = 0;
      for(auto x: s){
        if(s.find(x-1) != s.end() || s.find(x+1) != s.end()){
          continue;
        } else {
          s.insert(x+1);
          ans++;
        }
      }
      cout<<ans<<endl;
    }
  return 0;
}
