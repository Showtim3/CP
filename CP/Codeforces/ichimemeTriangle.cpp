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

    int t;
    cin>>t;

    while(t--){
      lli a,b,c,d;
      cin>>a>>b>>c>>d;
      lli first = b;
      lli second = c;
      lli third = c;
      if(!third) third = c;
      cout<<first<<" "<<second<<" "<<third<<endl;
    }
  return 0;
}
