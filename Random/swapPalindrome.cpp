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

void checkPossiblePalindromeFirst(string s){
  int i=0, j=s.length();
  bool swapped[j];
  for(i=0;i<j;i++){
    swapped[i]=false;
  }
  i=0;
  j-=1;
  int swapCount = 0;
  bool possible=true;
  bool equal=false;
  while(i<=j){
    equal=false;
    if(s[i]==s[j]){
      equal=true;
      i++;
      j--;
    } else {
      if(!swapped[i] && !swapped[i+1] && s[i+1]==s[j]){
        swapCount++;
        swap(s[i],s[i+1]);
        swapped[i]=true;
        swapped[i+1]=true;
      } else if(!swapped[j] && !swapped[j-1] && s[j-1]==s[i]){
        swapCount++;
        swap(s[j],s[j-1]);
        swapped[j]=true;
        swapped[j-1]=true;
      }
    }
    if(!equal && s[i]==s[j]){
      i++;
      j--;
      continue;
    } else if(!equal) {
      possible = false;
      break;
    }
  }
  if(possible){
    cout<<"YES"<<endl;
    cout<<swapCount<<endl;
  } else {
    cout<<"NO"<<endl;
  }
}

int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      checkPossiblePalindromeFirst(s);
    }
  return 0;
}
