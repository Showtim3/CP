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

void add(vector<int> v, int ans[]){
  for(int i=0;i<v.size();i++) ans[v[i]-'a']++;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
      int n,m;
      cin>>n>>m;
      string s;
      int ele;
      int i,j;
      map<int, int> mp;
      cin>>s;
      for(i=0;i<m;i++){
        cin>>ele;
        mp[ele]++;
      }

      int ans[26]={0};

      // 1 -> 1
      // 3-> 2
      for(auto x: mp){
        // cout<<x.first<<" "<<x.second<<endl;
        for(i=0;i<x.first;i++){
            ans[s[i]-'a']+=x.second;
        }

      }

      for(i=0;i<s.length();i++){
        ans[s[i]-'a']++;
      }

      for(i=0;i<26;i++){
        cout<<ans[i]<<" ";
      } cout<<endl;
}

  return 0;
}
