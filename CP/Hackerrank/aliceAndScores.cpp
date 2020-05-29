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
    vector<int> scores;
    scores.reserve(n);
    int i;
    for(i=0;i<n;i++){
      int ele; cin>>ele;
      scores.push_back(ele);
    }
    vector<int> alice;
    int m1;
    cin>>m1;
    scores.reserve(m1);
    for(i=0;i<m1;i++){
      int ele; cin>>ele;
      alice.push_back(ele);
    }

    // sort(scores.begin(), scores.end(), greater<int>());
    scores.erase(unique(scores.begin(), scores.end()), scores.end());
    map<int, int> m;
    for(i=0;i<scores.size();i++){
        m.insert(make_pair(scores[i],i+1));
    }

    vector<int> ans;
    ans.reserve(m1);
    for(auto x: alice){
      if(m.count(x)){
        ans.push_back(m[x]);
      } else {
        vector<int>::iterator upper1;
        upper1 = upper_bound(scores.begin(), scores.end(), x, greater<int>());
        int ans1 = upper1- scores.begin();
        ans.push_back(ans1+1);
      }
    }
    // return ans;
    for(auto x: ans){
      cout<<x<<endl;
    }

  return 0;
}
