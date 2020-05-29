// Check if the string is a palindrom with recursion
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


bool checkPalindrome(string s, int startPos, int endPos){
  if(startPos>=endPos){
    return true;
  }
  if(s[startPos]!=s[endPos]){
    return false;
  }
  return checkPalindrome(s,startPos+1, endPos-1);
}

bool checkPalindrome(string s){
    return checkPalindrome(s, 0, s.length()-1);
}

int main(){
  cout<<checkPalindrome("nitin")<<endl;
  cout<<checkPalindrome("raar")<<endl;
  cout<<checkPalindrome("abcd")<<endl;
  cout<<checkPalindrome("racecar")<<endl;
  return 0;
}
