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

    int a,b,c;
    cin>>a>>b>>c;
    int D = (b*b) - (4*a*c);

    if(D<0){
      cout<<"Imaginary"<<endl;
    } else {
      int r1 = (-b + sqrt(D))/(2*a);
      int r2 = (-b - sqrt(D))/(2*a);
      if(D==0){
          cout<<"Real and Equal"<<endl;
          cout<<min(r1,r2)<<" "<<max(r1,r2)<<endl;
      } else {
          cout<<"Real and Distinct"<<endl;
          cout<<min(r1,r2)<<" "<<max(r1,r2)<<endl;
      }
    }

  return 0;
}
