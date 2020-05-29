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
// Move all the x to the end


void moveXToEnd(string &s, int i){
  if(i==s.length()){
    return;
  }
  if(s[i]=='x'){
    s.erase(i,1);
    s.append("x");
  }
  moveXToEnd(s,i+1);
}
void moveXToEnd(string &s){
    moveXToEnd(s, 0);
}

int main(){

  string s1="abexexdexed";
  moveXToEnd(s1);
  cout<<s1<<endl;
  return 0;
}
