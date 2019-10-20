#include<iostream>
#include <stack>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      ll n,k,rem;
      cin>>n>>k;
      rem = 9 - (n%10);
      n=n+rem;
      k=k-rem;
      n = n-9;
      k-=1;
      k=k%10;
      cout<<n+k<<endl;
    }
  return 0;
}
