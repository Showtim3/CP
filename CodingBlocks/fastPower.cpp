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


int fastPower(int a,int b){
  if(b==0){
    return 1;
  }
  int ans;
  if(b%2==0){
    ans = fastPower(a,b/2);
    return ans*ans;
  } else {
    ans = fastPower(a,b/2);
    return ans*ans*a;
  }
}
int main(){

    int t;
    cin>>t;

    while(t--){
      int a,b;
      cin>>a>>b;
      cout<<fastPower(a,b)<<endl;
    }
  return 0;
}
