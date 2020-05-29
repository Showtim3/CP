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


string name[40] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void printString(string s,int i){
  if(i==s.length()){
    return;
  }
  cout<<name[s[i]-'0']<<" ";
  printString(s,i+1);
}
int main(){

    int t;
    cin>>t;

    while(t--){
      string s;
      cin>>s;
      printString(s,0);
      cout<<endl;
    }
  return 0;
}
