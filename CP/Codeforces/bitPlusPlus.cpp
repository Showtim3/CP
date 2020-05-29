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

    int t;
    cin>>t;
    int x=0;
    while(t--){
      string s;
      cin>>s;

      if(s[0]=='+'||s[1]=='+'||s[2]=='+'){
        x+=1;
      } else x-=1;
    }
    cout<<x<<endl;
  return 0;
}
