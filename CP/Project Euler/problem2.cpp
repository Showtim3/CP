// sum of even fibonacci numbers below 4 million

#include <iostream>
using namespace std;

int main(){

  unsigned long long int first = 1, second = 2, nextTerm=0;
  unsigned long long int sum =0;


  while(nextTerm<=4000000){
    nextTerm = first + second;
    first = second;
    second = nextTerm;
    if(nextTerm%2==0){
      cout<<nextTerm<<endl;
      sum+=nextTerm;
    }
  }
  cout<<sum+2<<endl;
  return 0;
}
