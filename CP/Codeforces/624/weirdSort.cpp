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
    li n,m;
    li ele;
    li i,j,temp;
    while(t--){
      cin>>n>>m;
      vector<li> a;
      map<li,bool> p;
      vector<li> required;
      a.reserve(n);

      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }
      for(i=0;i<m;i++){
        cin>>ele;
        p.insert(make_pair(ele,true));
      }
      for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
          if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            required.push_back(j);
          }
        }
      }
      bool possible=true;
      for(i=0;i<required.size();i++){
        if(!p.count(required[i]+1)) {
          possible=false;
          break;
        }
      }
      if(possible){
        cout<<"YES"<<endl;
      } else cout<<"NO"<<endl;
      a.clear();
      required.clear();
      p.clear();
    }
  return 0;
}
