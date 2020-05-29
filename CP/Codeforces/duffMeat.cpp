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

    int n;
    cin>>n;

    while(n--){
      int m,price;
      cin>>m>>price;
      vector<pair<int, int> > v;
      v.push_back(make_pair(m, price));
    }
    int totalMeat=0;
    for(auto x: v){
      totalMeat+=x.first;
    }

  return 0;
}
