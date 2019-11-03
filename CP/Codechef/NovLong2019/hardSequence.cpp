#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;


int lastOccurence(vector<int> v, int value){
  // for(int i=0;i<v.size();i++){
  //   cout<<v[i]<<" ";
  // }
  // cout<<endl;
  // cout<<" value "<<value<<endl;
    for(int i=v.size()-2;i>=0;i--){
      if(v[i] == value){
        // cout<<" value : "<<value<<" returning value : "<<i<<endl;
        return i;
      }
    }
    // cout<<" value "<<value<<"returning zero"<<0<<endl;
    return 0;
}

int main(){

    int t;
    cin>>t;

    int n;
    vector<int> v;
    int i;
    int count;
    while(t--){
      count = 0;

        cin>>n;
        v.push_back(0);
        v.push_back(0);
        v.push_back(1);

        for(i=3;i<n;i++){
          if(lastOccurence(v,v[i-1]) ==0 ){
            v.push_back(0);
          }
          else {
            int item = i-1 - lastOccurence(v,v[i-1]);
            v.push_back(item);
          }
        }
        
        int ele = v[n-1];
        for(i=0;i<n;i++){
          if(v[i]==ele)
          count++;
        }
        cout<<count<<endl;
        v.clear();
    }
  return 0;
}
