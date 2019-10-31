#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;
    int n,i;
    vector<int> v;
    while(t--){
      cin>>n;
      int ans = 1;
        for(i=0;i<n;i++){
          int ele;
          cin>>ele;
          v.push_back(ele);
        }

        sort(v.begin(),v.end());

        for(i=0;i<n-1;i++){
          if(v[i+1]-v[i] == 1){
            ans++;
          }
        }
        v.clear();
        if(ans>1){
          ans = 2;
        }
        cout<<ans<<endl;

    }

  return 0;
}
