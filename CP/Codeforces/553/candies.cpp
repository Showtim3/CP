#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int
#define ulli unsigned long long int
using namespace std;

int main(){

    int t;
    cin>>t;
    ulli a,b,c;
    while(t--){
      cin>>a>>b>>c;
      ulli sum = (a+b+c)/2;
      cout<< sum<<endl;
    }
  return 0;
}
