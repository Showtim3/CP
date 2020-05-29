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
    lli k,n;
    while(t--){
      cin>>n>>k;
      lli ans = log10(n)/k;
      lli logN = log10(n);
      cout<<"Log is"<<logN<<endl;
      ans=pow(10,ans);
      cout<<ans<<endl;

    }
  return 0;
}
