#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;


int numberOfWays(int n){
  if(n==1){
    return 1;
  }
  if (n==2){
    return 2;
  }

  return numberOfWays(n-1) + numberOfWays(n-2);
}
int main(){

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    cout<<numberOfWays(n)<<endl;
  }

  return 0;
}
