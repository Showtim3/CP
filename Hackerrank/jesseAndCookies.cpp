#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    ll n,k,i,firstIndex;
    cin>>n>>k;
    vector<int> v;
    v.reserve(n);
    for(i=0;i<n;i++){
      ll ele;
      cin>>ele;
      v.push_back(ele);
    }
    sort(v.begin(),v.end());
    ll numberOfOperations = 0;
    i = 0;
    i=0;
    // for(auto x: v){
    //   cout<<x<<" ";
    // }
    // cout<<endl;
    while(i<v.size()){
      if(v[i] >=k && v[i+1] >=k){
        // cout<<"If called";
        break;
      }
      else{
        // cout<<"Else called";
        while(i < v.size() && v[i] < k) {
          // cout<<"Inside while loop"<<endl;

          v[i+1] = min(v[i],v[i+1]) + (2 * max(v[i+1],v[i]));
          numberOfOperations++;
          if(v[i+1] >=k){
            i+=2;
          } else {
            i++;
          }
          cout<<"numberOfOperations: "<<numberOfOperations<<"i: "<<i<< " "<<v[i+1]<<endl;
        }
      }
    }
    cout<<i<<endl;
    if(i>=v.size() && v[i-1] < k){
      cout<<-1<<endl;
    } else {
        cout<<numberOfOperations<<endl;
    }


  return 0;
}
