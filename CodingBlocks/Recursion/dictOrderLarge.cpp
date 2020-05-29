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

void addPermutations(vector<string> &ans,string s, int i,int j){
  if(i==j){
    ans.push_back(s);
    return;
  }
  for(int k=i;k<=j;k++){
    swap(s[k],s[i]);
    addPermutations(ans, s, i+1,j);
    swap(s[k],s[i]);
  }
}

int main(){
  vector<string> ans;
  string s;
  cin>>s;
  string originalString = s;

  addPermutations(ans,s,0,s.length()-1);
  sort(ans.begin(),ans.end());
  int index= lower_bound(ans.begin(), ans.end(), originalString) - ans.begin()+1;
  int i;
  for(i=index; i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}
