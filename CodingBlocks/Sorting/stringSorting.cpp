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

    int n;
    cin>>n;

    vector<string> v;
    v.resize(n);
    int i;
    for(i=0;i<n;i++){
      cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(i=1;i<n;i++){
      if (v[i].find(v[i-1]) == 0) {
        swap(v[i],v[i-1]);
      }
    }
    for(i=0;i<n;i++){
      cout<<v[i]<<endl;
    }
  return 0;
}
