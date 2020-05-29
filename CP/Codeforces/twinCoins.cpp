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

    int n,i;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++){
      int ele; cin>>ele;
      v.push_back(ele);
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    sort(v.begin(), v.end(), greater<int>());
    int sumCollected=0;
    i=0;
    while(i<n && sumCollected <= sum){
      sumCollected+=v[i];
      sum-=v[i];
      i++;
    }
    cout<<i<<endl;

  return 0;
}
