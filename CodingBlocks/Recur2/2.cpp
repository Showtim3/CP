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

lli getNumber(string s){

lli number = 0;
int i;
while(i!=s.length()){
int digit = s[i]-'0';
number = number*10+digit;
i++;
}

return number;
}

int main(){

    string s;
    cin>>s;

    lli num = getNumber(s);
    cout<<num<<endl;
  return 0;
}
