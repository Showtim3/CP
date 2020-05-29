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
lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


lli findlcm(vector<lli> arr, lli n)
{
    lli ans = arr[0];
    for (lli i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
    return ans;
}

int main(){

    int t;
    cin>>t;

    while(t--){
      int n,m;
      cin>>n>>m;

      vector<lli> v;
      int i,ele;
      v.reserve(n);
      for(i=0;i<n;i++){
          cin>>ele;
          v.push_back(ele);
      }
      lli ans = -1;
      lli index = 1;
      for(i=1;i<=m;i++){
        v.push_back(i);
        lli current = findlcm(v,n+1);
        if(ans<current){
          ans=current;
          index=i;
        }
        v.pop_back();
      }
      cout<<index<<endl;
      v.clear();
    }
  return 0;
}
