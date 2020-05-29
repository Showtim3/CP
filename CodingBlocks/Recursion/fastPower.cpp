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

int _calculatePower(int a,int b){
  if(b<=0){
    return 1;
  }
  return a*_calculatePower(a,b-1);
}
int calculatePower(int a,int b){
  return _calculatePower(a,b);
}

int main(){

    int t;
    cin>>t;

    while(t--){
      int a,b;
      cin>>a>>b;
      cout<<calculatePower(a,b)<<endl;
    }
  return 0;
}
