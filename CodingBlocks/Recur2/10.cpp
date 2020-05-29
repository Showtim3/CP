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
// Count the number of twins

void countTwins(string s, int i, int &count){
  if(i==s.length()-1){
    return;
  }
  if(s[i]==s[i+2]){
    count+=1;
  }
  countTwins(s,i+1,count);
}

int countTwins(string s){
  int count = 0;
  countTwins(s,0,count);
  return count;
}

int main(){
    string s1 = "AxAxA"; //3
    string s = "AxAxAx"; //3
    string s2 = "AxA";//1
    string s3 = "twins";//0
    string s4 = "BaBaCiCiBBB"; // 5
    cout<<countTwins(s1)<<endl;
    cout<<countTwins(s)<<endl;
    cout<<countTwins(s2)<<endl;
    cout<<countTwins(s3)<<endl;
    cout<<countTwins(s4)<<endl;
  return 0;
}
