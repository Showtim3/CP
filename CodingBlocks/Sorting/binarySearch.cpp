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

    int n,i;
    cin>>n;
    vector<int> v;
    int ele;
    for(i=0;i<n;i++){
      cin>>ele;
      v.push_back(ele);
    }
    cin>>ele;
    int low=0, mid,high=n-1;
    bool found=false;
    while(low<high){
      mid=(high+low)/2;
      if(v[mid]==ele){
        cout<<mid<<endl;
        found=true;
        break;
      }
      if(v[mid]<ele){
        low=mid+1;
      }
      if(v[mid]>ele){
        high=mid-1;
      }
    }
    if(!found){
      cout<<-1<<endl;
    }

  return 0;
}
