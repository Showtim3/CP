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

    string a,b;
    string s[41];
    li i,n,k;
    cin>>n;
    cin>>s[0];
    cin>>s[1];
    cin>>k;

    for(i=2;i<n;i++){
        s[i] = s[i-2] + s[i-1] + s[i-1];
    }
    // cout<<s[n-1]<<endl;
    if(s[n-1].length() >= k){
      cout<<s[n-1][k-1]<<endl;
    } else cout<<"-1"<<endl;

  return 0;
}
