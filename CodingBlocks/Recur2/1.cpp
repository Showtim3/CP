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

int getSum(string s){
  int sum=0;
  int i=0;
  while(i!=s.length()){
    int digit = s[i]-'0';
    sum+=digit;
    i++;
  }
  return sum;
}
int main(){
  string s;
  cin>>s;

  cout<<getSum(s)<<endl;
  return 0;
}
