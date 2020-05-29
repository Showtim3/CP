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


bool isOdd(int n){
  return (n&1);
}

int getBit(int n, int i){
  int mask = 1<<n;
  int bit = (n&mask) > 0 ? 1:0;
  return bit;
}

int setBit(int n, int i){
  int mask = 1<<i;
  int bit = (n|mask);
  return bit;
}

int clearBit(int n, int i){
  int mask=~(1<<i);
  int bit = n&mask;
  return bit;
}

int updateBit(int n,int i, int v){
  int ans;
  if(v==0){
    ans = clearBit(n,i);
  }
  if(v==1){
    ans = setBit(n,i);
  }
  return ans;
}

int clearLastIBits(int n, int i){
  int mask = (-1<<i);
  return (n&mask);
}

int clearBitsInRange(int n, int i, int j){
  int a = (-1<<(j+1));
  int b = pow(2,i)-1;
  int mask = (a | b);
  return (n&mask);

}
int main(){
    int n=5;
    // cout<<(5&1)<<endl;
    // cout<<(4&1)<<endl;
    // cout<<setBit(5,1)<<endl;
    // cout<<clearBit(5,0)<<endl;
    // cout<<updateBit(updateBit(n,2,0),3,1)<<endl;
    // cout<<clearLastIBits(15,3)<<endl;
    // cout<<(~0)<<endl;
    cout<<clearBitsInRange(31,1,3);
  return 0;
}
