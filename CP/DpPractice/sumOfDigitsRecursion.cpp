#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;


int sumOfDigits(int number){
  if(number == 0){
    return 0;
  }

  return number % 10 + sumOfDigits(number/10);
}
int main(){


    cout<<sumOfDigits(1234)<<endl;
    cout<<sumOfDigits(123456)<<endl;
    cout<<sumOfDigits(11)<<endl;
    cout<<sumOfDigits(0)<<endl;
  return 0;
}
