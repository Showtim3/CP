#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int x = max(a,b);
    int success = 6-x+1;
    int g= __gcd(success, 6);
    success/=g;
    int total = 6/g;
    cout<<success<<"/"<<total<<endl;
  return 0;
}
