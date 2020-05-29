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

char str[10][100] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printLetter(lli n){
  if(n<=0) return;
  printLetter(n/10);
  cout<<str[n%10]<<" ";
}

int main(){
  lli n;
  n = 2048;
  printLetter(n);
  cout<<endl;
  return 0;
}
