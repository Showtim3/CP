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
  int n,d;
  cin>>n>>d;
  vector<int> v;
  v.resize(n);
  int i;
  for(i=0;i<n;i++){
    cin>>v[i];
  }
  int totalSongTime = 0;
  for(auto x: v){
    totalSongTime+=x;
  }
  totalSongTime+= 10*(n-1);
  int ans=0;
  int jokes;
  if(totalSongTime>d){
    ans=-1;
  } else {
    jokes = (n-1)*2;
    int timeRemaining = d-totalSongTime;
    jokes+=timeRemaining/5;
  }
  if(ans!=-1) cout<<jokes<<endl;
  else cout<<ans<<endl;
  return 0;
}
