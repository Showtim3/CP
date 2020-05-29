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


bool checkDivisible(int x){

  int numbers[] = {2,3,5,7,11,13,17,19,23,29};
  int n = sizeof(numbers)/sizeof(numbers[0]);
  for(int i=0;i<n;i++){
      if(x%numbers[i]==0){
        return false;
      }
  }
  return true;
}
int main(){


      // 0 and 1 are not a CB number.
      // 2,3,5,7,11,13,17,19,23,29 are CB numbers.
      // Any number not divisible by the numbers in point 2( Given above) are also CB numbers.

    string s;
    int n;
    vector<string> subs;
    cin>>n;
    cin.ignore();
    cin>>s;
    int i,j,k;
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        string temp = "";
        for(k=i;k<=j;k++){
          temp +=s[k];
        }
        subs.push_back(temp);
      }
    }
    sort(subs.begin(), subs.end());
    subs.erase(remove(subs.begin(), subs.end(), "0"), subs.end());
    subs.erase(remove(subs.begin(), subs.end(), "1"), subs.end());
    map<int, bool> m;
    m.insert(make_pair(2,1)); m.insert(make_pair(3,1)); m.insert(make_pair(11,1));
    m.insert(make_pair(5,1)); m.insert(make_pair(7,1)); m.insert(make_pair(13,1));
    m.insert(make_pair(17,1)); m.insert(make_pair(19,1)); m.insert(make_pair(23,1));
    m.insert(make_pair(29,1));
    vector<int> numbers;
    for(auto x: subs){
      if(m.count(stoi(x))){
        numbers.push_back(stoi(x));
      }
      if(checkDivisible(stoi(x))){
        numbers.push_back(stoi(x));
      }
    }
    for(auto x: numbers){
      cout<<x<<endl;
    }

// 2,3,5,7,11,13,17,19,23,29 are CB numbers.
// Any number not divisible by the numbers in point 2( Given above) are also CB numbers.


















  return 0;

}
