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

lli primeFactors(lli n)
{
    set<lli> s;
    while (n % 2 == 0) {
        n = n/2;
        s.insert(2);
    }

    for (lli i = 3; i <= sqrt(n); i = i + 2)
    { while (n % i == 0) {
          s.insert(i);
          n = n/i;
      }
    }
  if (n > 2)
      s.insert(n);

  return s.size();
}



int main(){
    int t;
    cin>>t;
    lli x,k;
    while(t--){
      cin>>x>>k;
      bool ans=0;
      if(primeFactors(x)>=k){
        ans=true;
      }
      cout<<ans<<endl;
    }
  return 0;
}
