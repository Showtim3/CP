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


bool isMember(lli a, lli d, lli x)
{

    // If difference is 0, then x must
    // be same as a.
    if (d == 0)
        return (x == a);

    // Else difference between x and a
    // must be divisible by d.
    return ((x - a) % d == 0 && (x - a) / d >= 0);
}


bool solve(lli totalFactors, lli primeFactors){

  lli firstTerm = pow(2,primeFactors);
  lli diff = 2*(primeFactors-1);
  return isMember(firstTerm,diff, totalFactors);
}
// 1 2 3 4 6 12
// 1 2 3 6
// 1 2 3 4 6 12
// 2  3
int main(){
  int t;
  cin>>t;
  // k = 1,2
  while(t--){
    lli totalFactors,primeFactors;
    cin>>totalFactors>>primeFactors;
    //lli totalFactors = pow(2,k);
    cout<<solve(totalFactors, primeFactors)<<endl;
    }
  return 0;
}
