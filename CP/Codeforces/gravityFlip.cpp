#include <iostream>
#include <set>
#include <map>
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

    vector<int> v;
    v.resize(n);
    int i;
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    // 3 2 1 2
    // 2 1 2 3
    reverse(v.begin(), v.end());
    bool swapped = 1;
    while(swapped){
      swapped=0;
    for(i=0;i<n-1;i++){
      if(v[i]<v[i+1]){
        int diff = v[i+1]-v[i];
        v[i]+=diff;
        v[i+1]-=diff;
        swapped=1;
      }
      }
    }
    reverse(v.begin(), v.end());
    for(auto x: v){
      cout<<x<<" ";
    } cout<<endl;

  return 0;
}
