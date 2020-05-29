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

    int n;
    cin>>n;
    vector<int> v;
    int i;
    for(i=0;i<n;i++){
      int ele;
      cin>>ele;
      v.push_back(ele);
    }
    double sum = accumulate(v.begin(), v.end(), 0);
    double ans = double(sum/n);

    cout<<ans<<endl;
  return 0;
}
