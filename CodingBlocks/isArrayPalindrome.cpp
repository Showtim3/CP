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

bool isPalindrome(vector<int> a, int n){
  int i=0,j=n-1;

  while(i<=j){
      if(a[i]!=a[j]){
        return false;
      }
      i++;
      j--;
  }
return true;
}


int main(){

    int n;
    cin>>n;
    vector<int> a;
    a.reserve(n);
    int ele;
    for(int i=0;i<n;i++){
      cin>>ele;
      a.push_back(ele);
    }

    if(isPalindrome(a, n)){
      cout<<"true"<<endl;
    } else cout<<"false"<<endl;
  return 0;
}
