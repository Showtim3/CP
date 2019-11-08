#include <iostream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

#define li long int
#define ll long long
#define lli long long int
#define ld long double
using namespace std;


li bobString=0;
li aliceString=0;
multiset<string> aliceRecepies;
multiset<string> bobRecepies;



bool subString(string str, int n)
{
  li i;
  int arr[4][3]={{0,1,2},{1,1,2},{2,3,4},{3,1,4}};
  int currentState = 0;
  if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'){
    currentState = 1;
  } else {
    currentState = 2;
  }
  for(i=1;i<n;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
      currentState = arr[currentState][1];
    } else {
      currentState = arr[currentState][2];
    }
    if(currentState==4){
      return false;
    }
  }
  return true;
}

void consumeString(string &s){
  int i;
  li vowelCount = 0;
  li consonantCount = 0;
  bool alice = true;

  if(s.length()==1){
    if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'){
      aliceString+=1;
      aliceRecepies.insert(s);
    } else {
      bobString+=1;
      bobRecepies.insert(s);
    }
  } else {

    if(subString(s, s.length())){
      aliceString+=1;
      aliceRecepies.insert(s);
    } else {
      bobString+=1;
      bobRecepies.insert(s);
    }
  }
}

ld calculateRatio(){
  // cout<<"aliceRecepies: "<<aliceRecepies.size()<<endl;
  // for(auto x: aliceRecepies){
  //   cout<<x<<" ";
  // }
  // cout<<endl;
  //
  // cout<<"bobRecepies: "<<bobRecepies.size()<<endl;
  // for(auto x: bobRecepies){
  //   cout<<x<<" ";
  // } cout<<endl;
  li i;
  li count=0;
  set<char> uniqueChars;
  for(auto x: aliceRecepies){
    for(i=0;i<x.length();i++){
      uniqueChars.insert(x[i]);
    }
  }

  bool stringFound = false;
  double recepies = 0;
  double ans = 1;
  double mulRecepies=1;
  double mulResult=1;
  for(auto x: uniqueChars){
    recepies=0;
    count = 0;
    for(auto y: aliceRecepies){
      stringFound = false;
      for(i=0;i<y.length();i++){
        if(y[i]==x){
          stringFound=true;
          count++;
        }
      }
      if(stringFound){
        recepies++;
      }
    }
    double result = pow(count, aliceString);
    ans*=recepies/ result;
    // mulRecepies*=recepies;
    // mulResult*=result;
  }

  ld aliceMulRecepies = mulRecepies;
  ld aliceMulResult = mulResult;


    uniqueChars.clear();
    stringFound = false;
    mulRecepies=1;
    mulResult=1;
    for(auto x: bobRecepies){
      for(i=0;i<x.length();i++){
        uniqueChars.insert(x[i]);
      }
    }

    for(auto x: uniqueChars){
      recepies=0;
      count = 0;
      for(auto y: bobRecepies){
        stringFound = false;
        for(i=0;i<y.length();i++){
          if(y[i]==x){
            stringFound=true;
            count++;
          }
        }
        if(stringFound){
          recepies++;
        }
      }
      ld result = pow(count, bobString);
      ans*=result/ recepies;
      // mulRecepies*= recepies;
      // mulResult*=result;
    }

    // ans = (aliceMulRecepies * mulResult) / (aliceMulResult * mulRecepies );
    uniqueChars.clear();

  return ans;

}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int t;
    cin>>t;

    li l;
    string s;
    while(t--){
      bobString=0, aliceString=0;
      aliceRecepies.clear(),bobRecepies.clear();
        cin>>l;
        while(l--){
          cin>>s;
          consumeString(s);
        }
        std::cout << std::fixed;
        ld ans = calculateRatio();
        if(ans > 10000000 ){
          cout<<"Infinity" << endl;
        } else cout<<setprecision(7)<<ans<< endl;
    }
  return 0;
}
