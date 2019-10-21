#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

// The recursive solution was   return numberOfWays(n-1) + numberOfWays(n-2);
// Lets convert that to DP

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,i;
        cin>>n;

        vector<int> numberOfWays;
        numberOfWays.reserve(n+10);

        numberOfWays[0]=0;
        numberOfWays[1]=1;
        numberOfWays[2]=2;

        for(i=3;i<=n;i++){
          numberOfWays[i] = numberOfWays[i-1] + numberOfWays[i-2];
        }
        cout<<numberOfWays[i-1]<<endl;
    }
  return 0;
}
