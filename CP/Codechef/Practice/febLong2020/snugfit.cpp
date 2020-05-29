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

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      li i,j,ele;
      vector<li> length;
      vector<li> breadth;
      length.reserve(n);
      breadth.reserve(n);

      for(i=0;i<n;i++){
        cin>>ele;
        length.push_back(ele);
      }
      for(j=0;j<n;j++){
        cin>>ele;
        breadth.push_back(ele);
      }
      sort(length.begin(), length.end());
      sort(breadth.begin(), breadth.end());
      li ans=0;
      i=0;
      while(i<n){
        ans+=min(breadth[i], length[i]);
        i++;
      }
      cout<<ans<<endl;
      length.clear();
      breadth.clear();
    }
  return 0;
}
