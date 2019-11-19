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

// n = 10 power 5
// 0110100110001
int main(){

    li n,k,i,zeros=0,ones=0;
    int x;
    string s;
    cin>>n>>k>>x;
    cin>>s;
    for(i=0;i<n;i++){
      if(s[i]=='0'){
        zeros++;
      }
    }

    cout<<zeros<<endl;

    while(true){
        if(abs(k-zeros)<zeros){
          zeros = abs(k - zeros);
          ones = n - zeros;
        } else {
          break;
        }
    }
    cout<<ones<<endl;


  return 0;
}
