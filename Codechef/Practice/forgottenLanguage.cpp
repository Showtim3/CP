// https://www.codechef.com/problems/FRGTNLNG
#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;
    int n,k,i;
    unordered_map<string,int> m;
    vector<string> v;

    while(t--) {
      cin>>n>>k;
      v.reserve(n);
      string str;
      for(i=0;i<n;i++) {
        cin>>str;
        v.push_back(str);
        m[str] = -1;
      }
      int number;
      while(k--) {
        cin>>number;
        string words;
        for(i=0;i<number;i++){
          cin>>words;
          if(m.count(words)){
            m[words] = 1;
          }
        }
      }
      for(i=0;i<v.size();i++){
        if(m[v[i]]==1){cout<<"YES ";}
        else cout<<"NO ";
      }
      cout<<endl;
      m.clear();
      v.clear();
    }
  return 0;
}
