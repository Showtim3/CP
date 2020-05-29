#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int
#define ld long double
using namespace std;

int main(){

    int t;
    cin>>t;
    lli n,m,c;
    lli i;
    while(t--){
      vector<ld> range;
      cin>>n>>m>>c;
      for(i=0;i<c;i++){
        ld temp;
        cin>>temp;
        range.push_back(temp);
      }
      sort(range.begin(), range.end(), greater <ld>());
      ld total = n > m ? m : n;
      ld ans=0;
      ld i=0;
      bool possible = true;
      while(total > 0 && possible){
        // cout<<"i"<<i<<" total"<<total<<endl;
        if(i==range.size()){
          possible = false;
          cout<<"-1"<<endl;
          break;
        }
        total -= 2*range[i];
        i++;
        ans++;
      }
      if(possible){
          cout<<ans<<endl;
      }

    }
  return 0;
}
