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

    while(t--){
      int n;
      cin>>n;
      cin.ignore();
      string s;
      cin>>s;
      int x=0,y=0;
      bool xAxis = false, yAxis=false;
      for(int i=0;i<s.length();i++){
        if((s[i]=='L'||s[i]=='R') && xAxis){
          continue;
        }
        if(s[i]=='L' && !xAxis){
          x-=1;
          xAxis=true;
          yAxis=false;
        }
        if(s[i]=='R' && !xAxis){
          x+=1;
          xAxis=true;
          yAxis=false;
        }
        if((s[i]=='U'||s[i]=='D') && yAxis){
          continue;
        }
        if(s[i]=='U' && !yAxis){
          y+=1;
          xAxis=false;
          yAxis=true;
        }
        if(s[i]=='D' && !yAxis){
          y-=1;
          xAxis=false;
          yAxis=true;
        }
      }
      cout<<x<<" "<<y<<endl;
    }
  return 0;
}
