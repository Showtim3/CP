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

bool checkReverse(string s1, string s2, int i, int j){
  if(j<=0){
    return true;
  }
  if(s1[i]!=s2[j]){
    return false;
  }
  return checkReverse(s1,s2,i+1,j-1);
}

bool checkReverse(string s1,string s2){
  if(s1.length()!=s2.length()){
    return false;
  }
  return checkReverse(s1,s2,0,s2.length()-1);
}

int main(){
  string s1,s2;
  // cin>>s1;
  // cin>>s2;
  //abc cba will give true
  s1 = "abcd";
  s2 = "dcba";
  bool reverse = checkReverse(s1,s2);
  cout<<reverse<<endl;
  cout<<checkReverse("abc1","1c");
  cout<<checkReverse("pqrs","srqp");
  cout<<checkReverse("123456","654321");
  return 0;
}
