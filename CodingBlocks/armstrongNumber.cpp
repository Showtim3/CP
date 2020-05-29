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

    lli n;
    cin>>n;
    lli original = n;
    vector<int> digits;
    int digit;
    while(n>0){
      digit = n %10;
      n=n/10;
      digits.push_back(digit);
    }
    lli createdNumber=0;
    for(int i=0;i<digits.size();i++){
      createdNumber+=pow(digits[i],digits.size());
    }
    
    if(createdNumber == original){
      cout<<"true"<<endl;
    } else cout<<"false"<<endl;

  return 0;
}
