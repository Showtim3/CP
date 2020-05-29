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


void printParanthesis(){
  if(n==0){
    return;
  }
  if(n==1){
    vector<string> s;
    s.push_back("()");
    return s;
  }

  vector<string> s = printParanthesis(n-1);
  vector<string> ans;
  for(i=0;i<s.size();i++){

  }
}
int main(){

  int n=3;
  printParanthesis(3);
  return 0;
}
