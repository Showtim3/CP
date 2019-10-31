// to be completed :(

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      int a[110];
      int i,j;
      bool ans = true;
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      i = 0; j = n-1;

      while(i < n && j >=i && j>=0){
        if(a[i]==8 || a[i]==9 || a[i]==10 || a[j]==8 || a[j]==9 || a[j]==10){
          ans = false;
          break;
        }
        if(a[i]!=a[j]) {
          ans = false;
          break;
        }
        if(a[i+1]-a[i] >1){
          ans=false;
          break;
        }

        i++; j--;
      }
      ans ? cout<<"yes"<<endl : cout<<"no"<<endl;
    }
  return 0;
}
