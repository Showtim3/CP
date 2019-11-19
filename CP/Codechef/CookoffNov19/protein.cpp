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
// 1≤T≤200
// 1≤N≤100
// 1≤K≤106
// 1≤Ai≤106
int main(){

    int t;
    cin>>t;

    int n,i;
    li k;
    li rem = 0;
    vector<li> v;
    bool ans = true;
    while(t--){
      ans = true;
      cin>>n>>k;
      v.resize(n);
      rem = 0;
      for(i=0;i<n;i++){
        cin>>v[i];
      }

      for(i=0;i<n;i++){
        if(v[i] - k + rem >=0){
          rem = v[i]-k + rem;
        } else {
          ans = false;
          cout<<"NO "<<i+1<<endl;
          break;
        }

      }
      if(ans == true){
        cout<<"YES"<<endl;
      }

      v.clear();

    }
  return 0;
}
