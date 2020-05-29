#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

vector<int> getPrimeFactors(int n){
  vector<int> primes;
  int i;
  while(n%2==0){
    n=n/2;
    primes.push_back(2);
  }
  for(i=2;i*i<=n;i++){
    while(n%i==0){
      if(n%i==0){
          n=n/i;
          primes.push_back(i);
      }
    }
  }
  if(n>1) primes.push_back(n);
  return primes;
}

int getGcd(int n, int m){
  if(m==0){
    return n;
  }
  vector<int> p1 = getPrimeFactors(n);
  vector<int> p2 = getPrimeFactors(m);
  vector<int> intersection;
  set_intersection(p1.begin(), p1.end(), p2.begin(), p2.end(), back_inserter(intersection));
  int product = 1;
  for(auto x: intersection){
    product*=x;
  }
  return product;
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int odd=1;
    while(n>0){
      if(odd) n-=getGcd(a,n);
      if(!odd) n-=getGcd(b,n);
      odd=!odd;
    }
    if(!odd) cout<<"0"<<endl;
    else cout<<"1"<<endl;


  return 0;
}
