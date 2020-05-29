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
// __gcd(m, n)

int main(){
    int ans=1;

    for(int i=1;i<=10;i++){
      ans = (((i * ans)) /
               (__gcd(i, ans)));
    }
    cout<<ans<<endl;
  return 0;
}
