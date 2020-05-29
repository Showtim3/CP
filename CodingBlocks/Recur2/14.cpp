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

void printBwParanthesis(string s, int i, bool found){
    if(i==s.length()){
      return;
    }
    if(s[i]==')'){
      found=false;
      return;
    }
    if(found==true){
      cout<<s[i];
      printBwParanthesis(s,i+1,true);
    }
    if(s[i]=='('){
      printBwParanthesis(s,i+1,true);
    }
    printBwParanthesis(s,i+1,false);
}

void printBwParanthesis(string s){
    printBwParanthesis(s,0,false);
}

int main(){
  string s = "xyzabcdef";
  printBwParanthesis(s);
  return 0;
}
