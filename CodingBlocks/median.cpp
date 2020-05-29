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
    vector<int> v;
    int i,ele;
    for(i=0;i<2*n;i++){
      cin>>ele;
      v.push_back(ele);
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<endl;
  return 0;
}
