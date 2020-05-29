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
// 2,3
/*
2 3,
2 + 4
2 + 2
2 + 0
*/

int multiply(int a, int b){
  if(b==0){
    return 0;
  }
  return a + multiply(a,b-1);
}
int main(){

    int t;
    cin>>t;

    while(t--){
      int a,b;
      cin>>a>>b;
      bool negative = true;
      if(a<0 && b<0){
        negative = false;
        a=abs(a);
        b=abs(b);
      }
      if(a>0 && b>0){
        negative=false;
      }
      if(a<0 || b<0){
        negative = true;
        a=abs(a);
        b=abs(b);
      }
      if(negative){
        cout<<(-1 * multiply(a,b))<<endl;
      } else {
        cout<<multiply(a,b)<<endl;
      }

    }
  return 0;
}
