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
//a. the string begins with an 'a'
//b. each 'a' is followed by nothing or an 'a' or "bb"
//c. each "bb" is followed by nothing or an 'a'

bool checkString(string s, int i){
  if(i==s.length()){
    return true;
  }
  if(s[0]!='a'){
    return false;
  } 
  if(s[i]=='a' && i!=s.length()-1 && (s[i+1]!='a' || (s[i+1]=='b' && s[i+2]!='b'))) {
    return false;
  }
  if(s[i]=='b' && s[i+1]!='b'){
    return false;
  } else {

  }
}

bool checkString(string s){
  return checkString(s, 0);
}

int main(){

  string s="aabb";
  cout<<checkString(s)<<endl;
  return 0;
}
