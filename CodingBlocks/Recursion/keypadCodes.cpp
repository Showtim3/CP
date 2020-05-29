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

string keys[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wx" ,"yz"};
int counter=0;

void printAllPermutations(string p, string s, int n, int i){
  if(i==n){
    cout<<p<<" ";
    counter++;
    return;
  }


  string baseStr= keys[s[i]-'1'];
  for(int j=0;j<baseStr.length();j++){
    p+=baseStr[j];
    printAllPermutations(p,s,n,i+1);
    p.pop_back();
  }
}

int main(){
      string s;
      cin>>s;
      string p="";

      printAllPermutations(p,s,s.length(),0);
      cout<<endl;
      cout<<counter<<endl;
  return 0;
}
