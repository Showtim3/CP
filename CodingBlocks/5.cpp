//Nth Triangle

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

int NthTri(int i, int n) {
    if(i==n){
      return i;
    }

    return i + NthTri(i+1,n);
}

int NthTri(int n) {
    return NthTri(1,n);
}

int main(){

    cout<<NthTri(3);
  return 0;
}
