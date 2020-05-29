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
    fastio;
    int t;
    cin>>t;

    while(t--){
      string s;
      cin>>s;
      bool ans=0;
      if(s.length()==1||s.length()==2){
        ans=1;
      } else {
        string original = s;
        char first = s[0];
        li i;
        char last = s[s.length()-1];
        string leftShift=s;
        string rightShift=s;
        //rightShift
        for(i=s.length()-1;i>=1;i--){
          rightShift[i]=rightShift[i-1];
        }
        rightShift[0]=last;
        //leftShift
        for(i=0;i<s.length()-1;i++){
          leftShift[i]=leftShift[i+1];
        }
        leftShift[s.length()-1]=first;

        if(leftShift.compare(rightShift)==0){
          ans=1;
        } else ans=0;

      }
      if(ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  return 0;
}
