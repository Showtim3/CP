// https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int m,n,i;
    map<string,int> mp;
    string s;

    cin>>m>>n;

    for(i=0;i<m;i++){
      cin>>s;
      if(mp[s]){
        mp[s]+=1;
      }
      mp[s] = 1;
    }
    bool ans = true;
    for(i=0;i<n;i++){
      cin>>s;
      if(mp[s]>=1){
        mp[s]-=1;
      } else {
        ans=false;
      }
    }

    ans ? cout<<"Yes"<<endl : cout<<"No"<<endl;

  return 0;
}
