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

int clearBitsInRange(int n, int i, int j){
  int a = (-1<<(j+1));
  int b = pow(2,i) -1;
  int mask = a | b;
  return (mask&n);

}
int replaceMbyN(int n,int m,int i,int j){

// Clear all bits of m after j
  int nMask = clearBitsInRange(n,i,j);
  int mMask = (m<<i);


  int ans = nMask | mMask;
  return ans;
}

int main(){

    int t;
    cin>>t;

    while(t--){
      int n=15;
      int m=2;
      int i=1,j=3;
      cout<<replaceMbyN(n,m,1,3)<<endl;
    }
  return 0;
}
