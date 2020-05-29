#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int day=0;
    while(true){
      n--;
      day++;
      if(day%m==0){
        n+=1;
      }

      if(n==0) break;
    }
    cout<<day<<endl;
  return 0;
}
