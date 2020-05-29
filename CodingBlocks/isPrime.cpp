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

int main(){

    lli n,i;
    cin>>n;
    bool isPrime = false;

    if (n <= 1)  isPrime = false;
    if (n <= 3)  isPrime = true;

    if(!isPrime){
    for(i=2;i<=sqrt(n);i++){
      if(n%i==0){
        isPrime = true;
        break;
      }
    }
  }
    if(isPrime){
      cout<<"Prime"<<endl;
    } else cout<<"Not Prime"<<endl;
  return 0;
}
