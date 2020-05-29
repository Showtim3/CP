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

bool isHappy(int n) {
  int no=n;
  int number=0;
  bool first=true;
  while(1){
      if(n==1){
          return true;
      }
      int sum=0;
      int digit;
      while(n>0){
          digit=n%10;
          sum+=pow(digit,2);
          n/=10;
      }
      n=sum;
      if(no==sqrt(n) && !first){
          return false;
      }
      first=false;
      cout<<"Numebr is"<<n<<endl;
  }
}

int main(){

    int t;
    // cin>>t;
    t=100;

    while(t--){
      int n;
      cin>>n;
      cout<<isHappy(n)<<endl;
    }
  return 0;
}
