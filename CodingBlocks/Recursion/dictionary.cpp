#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string original;
void permute(string s, int i, int j,vector<string> &ans){
  if(i==j){
    if(s<original){
      ans.push_back(s);
    }
  }
  for(int k=i;k<=j;k++){
    swap(s[k],s[i]);
    permute(s, i+1, j, ans);
    swap(s[k],s[i]);
  }
}

int main(){
  cin>>original;
  string s = original;
  vector<string> ans;
  sort(s.begin(), s.end());
  int i=0;
  int j=s.length()-1;
  permute(s,i,j, ans);
  sort(ans.begin(),ans.end());
  for(i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}
