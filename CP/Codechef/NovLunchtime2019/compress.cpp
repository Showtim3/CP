#include <iostream>
#include <string>
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
    int n;
    int i,j;

    while(t--){

      string str;
      vector<int> a;
      cin>>n;
      a.resize(n);
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      for(i=0;i<n;i++){
        j=i;
        while(a[j]+1 == a[j+1]) {
          j++;
        }
        if((j-i)>=2){
          str+=to_string(a[i]) + "..." + to_string(a[j]) + ",";
          i=j;
        } else {
          str+=to_string(a[i])+',';
        }
      }
      str.erase(str.length()-1);
      cout<<str<<endl;

      str.clear();
      a.clear();
    }
  return 0;
}
