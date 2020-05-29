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

void replacePi(string &s,int i){
  if(i==s.length()-1){
    return;
  }
  if(s[i]=='p'&&s[i+1]=='i'){
    s.erase(i,2);
    s.insert(i, "3.14");
    replacePi(s,i+3);
  } else {
    replacePi(s,i+1);
  }

}
int main(){

    int t;
    cin>>t;

    while(t--){
      string s;
      cin>>s;
      replacePi(s,0);
      cout<<s<<endl;
    }
  return 0;
}
