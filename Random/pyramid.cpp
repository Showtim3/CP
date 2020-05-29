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
  int rows=5;
  int counter=1;
  for(int i=1;i<=rows;i++){
    for(int space=1;space<=rows-i;space++){
      cout<<"\t";
    }
    counter=i;
    for(int number=1;number<=i;number++){
      cout<<counter<<"\t"; counter++;
    }
    int dec=i-1; counter--;
    for(int number=1;number<=dec;number++){
      counter--;
      cout<<counter<<"\t";
    }

    for(int space=1;space<=rows-i;space++){
      cout<<"\t";
    }
    cout<<endl;
  }
  return 0;
}
