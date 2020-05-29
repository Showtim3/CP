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

void findDifference(string &s){
    string s1="";
    int n=s.length();
    int i=0,j=1;
    while(j!=n){
        s1 +=s[i] + to_string(s[j]-s[i]);
        i++;
        j++;
    }
    s1+=s[n-1];
    cout<<s1<<endl;
}

int main(){
    string s;
    cin>>s;
    findDifference(s);
  return 0;
}
