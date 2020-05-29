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

void _printPattern(int n,int i){
  if(i>=n){
    return;
  }
  for(int j=0;j<=i;j++){
    cout<<"*";
  }
  cout<<endl;
  _printPattern(n,i+1);
}

void printPattern(int n){
  _printPattern(n,0);
}

int main(){
  int n=5;
  printPattern(5);
  return 0;
}
