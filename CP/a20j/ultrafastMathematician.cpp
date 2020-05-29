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

  string a,b;
  cin>>a>>b;
  string ans="";
  for(int i=0;i<a.length();i++){
    if(a[i]==b[i]){
      ans.append("0");
    } else ans.append("1");
  }
  cout<<ans<<endl;
  return 0;
}
