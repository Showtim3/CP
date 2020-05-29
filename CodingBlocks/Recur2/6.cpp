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


void removeDuplicates(string &s, int i){
  if(i==s.length()){
    return;
  }
  if(s[i]==s[i+1]){
    s.erase(i,1);
    removeDuplicates(s,i);
  } else{
      removeDuplicates(s,i+1);
  }
}
int main(){

    string s="hellllo";
    removeDuplicates(s,0);
    cout<<s<<endl;


  return 0;
}
