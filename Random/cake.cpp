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

    while(t--){
      li n,k,i;
      cin>>n>>k;
      vector<li> a;
      li ele;
      set<li> s;
      li countHere=0;
      li maxCount=0;
      a.reserve(n);


      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }
      int j=1;

      for(i=0;i<n;i++){
        countHere++;
        s.insert(a[i]);

        if(s.size()==k){
          i=j;
          j++;
          countHere = 1;
          s.clear();
          s.insert(a[i]);
        }

        if(countHere>maxCount){
          maxCount = countHere;
        }
      }
      cout<<maxCount<<"\n";
      s.clear();
      a.clear();
    }
  return 0;
}
