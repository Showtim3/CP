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

    if(a>=b){
      cout<<1<<endl;
    } else {
        int itr=0;
        while(a<=b){
          a=a*3;
          b=b*2;
          itr++;
        }
        cout<<itr<<endl;
    }

  return 0;
}
