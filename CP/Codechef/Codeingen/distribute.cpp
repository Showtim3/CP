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
    li n;
    li sum;
    li ele;
    while(t--){
      cin>>n;
      sum= 0;
      for(li i=0;i<n;i++){
        cin>>ele;
        sum+=ele;
      }

      if(sum%2==0){
        cout<<"YES"<<endl;
      } else {
        cout<<"NO"<<endl;
      }
    }
  return 0;
}
