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
// int t;
// cin>>t;
// while(t--){
    lli number;
    cin>>number;
    int i;
    vector<int> digits;
    digits.reserve(30);
    while(number!=0){
      int digit=number%10;
      digits.push_back(digit);
      number/=10;
    }

    for(i=digits.size()-1;i>=0;i--){
      if(i==digits.size()-1&&digits[i]==9){
        continue;
      }
      if(9-digits[i]<digits[i]){
        digits[i]=9-digits[i];
      }
    }
    for(i=digits.size()-1;i>=0;i--){
      cout<<digits[i];
    }
    cout<<endl;
  // }
  return 0;
}
