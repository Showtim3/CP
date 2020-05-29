#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int a=0;
    int aSquare=0;
    int b=0;
    int bSquare=0;
    vector<pair<int, int> >v;
    while(true){
      aSquare = a*a;
      if(aSquare<=n){
        v.push_back(make_pair(a, n - aSquare));
      } else {
        break;
      }
      a++;
    }
    int count=0;
    for(auto x: v){
      b=x.second;
      bSquare = b*b;
      a=x.first;
      if(bSquare+a==m){
        count++;
      }
    }
    cout<<count<<endl;
  return 0;
}
