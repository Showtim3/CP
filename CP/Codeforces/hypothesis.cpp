#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

bool isPrime(lli number){
  if(number==2||number==1||number==3){
    return true;
  }
  for(lli i=2;i*i<=number;i++){
    if(number%i==0){
      return false;
    }
  }
  return true;
}
int main(){

    lli n;
    cin>>n;

    if(n&1){ //if odd any odd number will work since odd*odd+1 will be even
      if(n==1) cout<<3<<endl;
      else cout<<1<<endl;
    } else {
      //bruteForce
      lli m=1;
      while(1){
          lli number = (n*m)+1;
          if(!isPrime(number)){
            cout<<m<<endl;
            break;
          }
          m+=1;
      }
    }
  return 0;
}
