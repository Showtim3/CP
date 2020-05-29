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

bool compareDigits(string a, string b) {

     string XY = X.append(Y);
     // then append X at the end of Y
     string YX = Y.append(X);
     // Now see which of the two formed numbers is greater
     return XY.compare(YX) > 0 ? 1: 0;
}

int main(){
    int t;
    cin>>t;

    while(t--){
      vector<string> numbers;
      int n,i;
      cin>>n;
      string s;

      numbers.reserve(n);
      for(i=0;i<n;i++){
        cin>>s;
        numbers.push_back(s);
      }
      sort(numbers.begin(),numbers.end(), compareDigits);

      for(i=0;i<n;i++){
        cout<<stoi(numbers[i]);
      };
      cout<<endl;
    }
  return 0;
}
// 54123 54
