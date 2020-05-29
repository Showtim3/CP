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

void printSubs(string s, string output){

    if(s.empty()){
      cout<<output<<endl;
      return;
    }

    printSubs(s.substr(1),output);
    printSubs(s.substr(1),output+s[0]);
}

int main(){

    string s= "abc";
    printSubs(s,"");
  return 0;
}
