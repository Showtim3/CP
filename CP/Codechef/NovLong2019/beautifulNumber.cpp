#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int
// 1 2 3 4 5
using namespace std;

bool is_perfect_square(int n) {
    if (n < 0)
        return false;
    li root(round(sqrt(n)));
    return n == root * root;
}


// find the sum of squares of the digit and check if it is beautiful
calculate(li n){
  sum = 0;
  li originalNumber = n;
  while(n>0){
    digit = n % 10;
    n=n/10;
    sum+=pow(digit,2);
  }
  if(is_perfect_square(sum)) {
    return originalNumber;
  }
}
int main(){

    int t;
    cin>>t;

    li n;
    while(t--){
      cin>>n;
      cout<<calculate(n);
    }
  return 0;
}
