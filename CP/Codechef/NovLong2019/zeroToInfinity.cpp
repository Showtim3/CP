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



bool subString(string s, int n)
{
  int i;
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    bool alice= true;
    string str;
    li vowels= 0, consonants = 0;

    for (i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
            str = s.substr(i, len);
            if(str.length() > 1){
            vowels= 0, consonants = 0;
            for(int k=0;k<str.length();k++){

              if(str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u'){
                vowels++;
              } else {
                consonants++;
              }
            }

            if(vowels < consonants) {
              // cout<<"False string: "<<str<<endl;
              return false;
            }
          }
        }
      }
  // cout<<"True: "<<str<<endl;
  return true;
}

void consumeString(string &s){
  int i;
  li vowelCount = 0;
  li consonantCount = 0;
  bool alice = true;

  if(subString(s, s.length())){
    aliceString+=1;
    aliceRecepies.insert(s);
  } else {
    bobString+=1;
    bobRecepies.insert(s);
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
  li recepies = 0;
  ld ans = 1;

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
    ld result = pow(count, aliceString);
    ans*=recepies/ result;
  }

    uniqueChars.clear();
    stringFound = false;

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
    }
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
