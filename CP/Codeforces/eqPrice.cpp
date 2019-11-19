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
    int n;
    li sum,i;
    li price;
    li ans;
    while(t--){
      sum=0;
      cin>>n;
      for(i=0;i<n;i++){
        cin>>price;
        sum+=price;
      }
      ans = sum/n;
      if(sum%n!=0){
          ans+=1;
      }
      cout<<ans<<endl;

    }
  return 0;
}
