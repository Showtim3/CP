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


void populateMapLeft(map<char, char> &m, string row){
  for(int i=1;i<row.length();i++){
    m[row[i]] = row[i-1];
  }
}

void populateMapRight(map<char, char> &m, string row){
  for(int i=0;i<row.length()-1;i++){
    m[row[i]] = row[i+1];
  }
}
int main(){

    char ch;
    cin>>ch;
    map<char, char> mapL;
    map<char, char> mapR;
    string s;
    cin>>s;
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl;";
    string row3 = "zxcvbnm,./";
    // helloworld
    // gwkkiqieks
    populateMapLeft(mapL, row1);
    populateMapLeft(mapL, row2);
    populateMapLeft(mapL, row3);
    mapL['q']='q';
    mapL['a']='a';
    mapL['z']='z';

    populateMapRight(mapR, row1);
    populateMapRight(mapR, row2);
    populateMapRight(mapR, row3);
    mapR['p']='p';
    mapR[';']=';';
    mapR['/']='/';

    if(ch=='R'){
      for(int i=0;i<s.length();i++){
        s[i]=mapL[s[i]];
      }
    } else {
      for(int i=0;i<s.length();i++){
          s[i]=mapR[s[i]];
      }
    }
    cout<<s<<endl;

  return 0;
}
