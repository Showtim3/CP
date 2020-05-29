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

  string s;
  cin>>s;
  bool ans=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
      ans=1;
      break;
    }
  }
  if(ans) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
