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
      float k1,i;
      cin>>n;
      cin>>k1;

      int noOfA = int(ceil(k1/3));
      int k = int(k1);
      cout<<"NO"<<noOfA<<endl;
      string aString = "";

      string baseStr = 'b' + aString + 'b';
      string ansStr="";

      if(noOfA==0 || noOfA==1){
        cout<<"A1"<<endl;
        baseStr.insert(0, "a");
        cout<<baseStr<<endl;
        if((k+2)%3==0){
          cout<<"First if"<<endl;
          ansStr = baseStr;
        } else if((k+1)%3==0){
          cout<<"Second if"<<endl;
          ansStr = baseStr;
          swap(ansStr[ansStr.length()-2],ansStr[ansStr.length()-3]);
        } else if((k%3)==0){
          cout<<"Third if"<<endl;
          ansStr = baseStr;
          ansStr[ansStr.length()-1]='a';
          ansStr[0]='b';
        }
      } else {
        for(i=1;i<=noOfA;i++){
          aString+='a';
        }
        baseStr = 'b' + aString + 'b';
        cout<<baseStr<<endl;
      if((k+2)%3==0){
        cout<<"First if"<<endl;
        ansStr = baseStr;
      } else if((k+1)%3==0){
        cout<<"Second if"<<endl;
        ansStr = baseStr;
        swap(ansStr[ansStr.length()-1],ansStr[ansStr.length()-2]);
      } else if((k%3)==0){
        cout<<"Third if"<<endl;
        ansStr = baseStr;
        swap(ansStr[ansStr.length()-1],ansStr[ansStr.length()-2]);
        swap(ansStr[ansStr.length()/2], ansStr[ansStr.length()/2+1]);
      }
    }

      // cout<<n-int(ansStr.length())<<endl;
      for(i=1;i<=int(n-ansStr.length());i++){
        cout<<'a';
      }
      cout<<ansStr<<endl;


    }
  return 0;
}
