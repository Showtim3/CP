#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>


#define ll long long
#define lli long long int

using namespace std;


bool checkPalindrome(string s, int i, int j){
if(s.length()==0 || s.length()==1){
  return true;
}

if(j<i){
  return true;
}

else if(s[i]==s[j]){
  return checkPalindrome(s,++i,--j);
}

else return false;
}


int main(){

  string s = "abccba"; //length = 6
  int j = s.length();
  checkPalindrome(s,0,j-1) == 1 ? cout<< "True" : cout<< "False";

  s = "dabad"; //length = 6
  j = s.length();
  checkPalindrome(s,0,j-1) == 1 ? cout<< "True" : cout<< "False";

  s = "xyyx"; //length = 6
  j = s.length();
  checkPalindrome(s,0,j-1) == 1 ? cout<< "True" : cout<< "False";

  s = "ppq"; //length = 6
  j = s.length();
  checkPalindrome(s,0,j-1) == 1 ? cout<< "True" : cout<< "False";
  return 0;
}
