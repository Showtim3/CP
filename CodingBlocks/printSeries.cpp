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

    int n1,n2;
    int count=0;
    cin>>n1>>n2;
    int i=1;
    while(count!=n1){
      int term = (3*i)+2;
      if(term%n2!=0){
        cout<<term<<endl;
        count++;
      }
      i++;
    }
  return 0;
}
