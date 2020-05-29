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
    int t,x;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        map<int, int> m;
        int i;
        for(i=0;i<n;i++){
          int ele;
          cin>>ele;
          m.insert(make_pair(ele,i));
        }
        i=1;
        int ans=0;
        while(x){
          if(m.count(i)){
            ans++;
            i++;
          } else {
            ans++;
            i++;
            x--;
          }
        }
        while(true){
          if(m.count(i)){
            i++;
            ans++;
          } else break;
        }
        cout<<ans<<endl;
    }
  return 0;
}
