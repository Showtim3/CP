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
      int n, ele,i,j;
      vector<int> a;
      cin>>n;
      a.reserve(n);
      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }
      int maximum = *max_element(a.begin(), a.end());
      int k = n/2;
      i=0,j=n-1;

      while(a[i]!=maximum){
        i++;
      }
      while(a[j]!=maximum){
        j--;
      }

      int len = j-i+1;
      if(len>k){
        cout<<0<<endl;
      } else {
        cout<<k-len+1<<endl;
      }
      a.clear();

    }
  return 0;







}
