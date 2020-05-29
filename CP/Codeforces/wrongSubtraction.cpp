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

    lli a,b;
    cin>>a>>b;

    while(b--){
      if(a%10==0){
        a/=10;
      } else a-=1;
    }
    cout<<a<<endl;
  return 0;
}
