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
      string s1,s2;
      cin>>s1>>s2;
      int n=s1.length();
      int m=s2.length();
      int i,j;
      string a,b;
      a=s1;
      b=s2;
      int ans=0;
      for(i=0;i<n;i++){
        for(j=0;j<m;j++){
          swap(a[i],b[j]);
          int first = stoi(a);
          int second = stoi(b);
          int sum = first + second;
          ans=max(ans,sum);
          a=s1;
          b=s2;
        }
      }
      cout<<ans<<endl;
    }
  return 0;
}
