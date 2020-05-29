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

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printKeypad(string s, string output, int n){
  if(output.length()==n){
    cout<<output<<endl;
    return;
  }
  for(int i=0;i<table[s[0]-'0'].length();i++){
      output+=table[s[0]-'0'][i];
      printKeypad(s.substr(1), output, n);
      output.pop_back();
  }
}


int main(){

    string s;
    // cin>>s;
    s="12";
    printKeypad(s, "", s.length());
  return 0;
}
