#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include<string>
#define li long int
#define ll long long
#define lli long long int

using namespace std;
//add a * between consecutive same letters

void addStar(string &s,int i){
  if(i==s.length()){
    return;
  }
  if(s[i+1]==s[i]){
    s.insert(i+1,"*",1);
    addStar(s,i+2);
  } else {
    addStar(s,i+1);
  }
}
void addStar(string &s){
  return addStar(s,0);
}

int main(){
    string s = "abcefg";
    addStar(s);
    cout<<s<<endl;
  return 0;
}
