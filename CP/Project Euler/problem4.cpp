//largest palindromic product for two 3-didit numbers



#include<iostream>
using namespace std;
typedef long int li;

bool checkPalindromicNumber(li number){
  int digits[10];
  int i = 0;
  int digit;
  while(number>0){
    digit = number % 10;
    number = number/10;
    digits[i]=digit;
    i++;
  }
  for(int j=0;j<i;j++){
    if(digits[j]!=digits[i-1-j]){
      return false;
    }
  }
  return true;

}

int main(){
  li first=999;
  li second=999;
  li max=0;
  while(first>100){
    if(checkPalindromicNumber(first*second)==true){
      if(max<first*second){
        max=first*second;
      }
    }
    second--;
    if(second==100){
      first--;
      second = first;
    }
  }
  cout<<endl<<max<<endl;
  return 0;
}
