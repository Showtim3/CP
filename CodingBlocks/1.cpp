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

void printEven(int n, int i) {
  if(i==n){
    return;
  }
  if(i%2==0){
    cout<<i<<" ";
  }
  printEven(n, i+1);
}

void printOdd(int n, int i) {
  if(i==0)  {
      return;
  } if(i%2!=0){
    cout<<i<<" ";
  }
  printOdd(n,i-1);
}

void printNumbers(int n){
  printOdd(n,n);
  printEven(n,1);
  cout<<endl;
}

int main(){

  printNumbers(6);

  return 0;
}
