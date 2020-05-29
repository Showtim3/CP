#include <iostream>
#include <stack>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

bool checkIfBalanced(string str){
  stack<char> s;
  int i=0;
  bool popped = false;
  while(i<str.length()) {
    popped = false;
    if(str[i]=='(' || str[i]=='[' || str[i]=='{'||str[i]=='<'){
      s.push(str[i]);
    }
    if(str[i]==')' && s.top() == '('){
      popped = true;
      s.pop();
    } else if(str[i]=='}'&& s.top() == '{'){
      popped = true;
      s.pop();
    } else if(str[i]==']'&& s.top() == '['){
      popped = true;
      s.pop();
    } else if(str[i]=='>'&& s.top() == '<'){
      popped = true;
      s.pop();
    }
    if(!popped && (str[i]==')' || str[i]==']' || str[i]=='}'||str[i]=='>')){
      return false;
    }
    i++;
  }
  if(s.size()){
    return false;
  }
  return true;
}

int main(){

    // string s = "abc() + {[abcd(ef)]}";
    // string s2 = "abc(]) + {[abcd(ef)]}";
    // string s3 = "(((";
    string s;
    cin>>s;
    if(checkIfBalanced(s)){
      cout<<"Yes"<<endl;
    } else cout<<"No"<<endl;

  return 0;
}
