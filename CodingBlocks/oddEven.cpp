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

    int t;
    cin>>t;

    while(t--){
      lli n;
      lli sumOdd=0;
      lli sumEven=0;
      cin>>n;
      int digit;
      while(n>0){
        digit = n %10;
        if(digit%2==0){
          sumEven+=digit;
        } else {
          sumOdd+=digit;
        }
        n/=10;
      }
      if(sumEven%4==0 || sumOdd%3==0){
        cout<<"Yes"<<endl;
      } else cout<<"No"<<endl;
    }
  return 0;
}
