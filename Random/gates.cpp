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
      int n,k;
      cin>>n>>k;
      vector<char> a;
      a.reserve(n);
      char ch;
      int i,flip=0,head=0;
      for(i=0;i<n;i++){
        cin>>ch;
        a.push_back(ch);
      }

      int j;
      for(i=0;i<k;i++){
        // cout<<a[n-1-i]<<" ";
        if(a[n-1-i]=='H'){
          for(j=n-1-1-i;j>=0;j--){
            if(a[j]=='H'){
              a[j]='T';
            } else {
              a[j]='H';
            }
          }
        }
      }

      for(i=0;i<n-k;i++){
        // cout<<a[i]<<" ";
        if(a[i]=='H'){
          head++;
        }
      }
      cout<<head<<endl;
      a.clear();
    }
  return 0;
}
