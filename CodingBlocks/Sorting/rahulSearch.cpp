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


int search(vector<int> v, int low, int high, int element){
  if(low>high){
    return -1;
  }
    int mid=(low+high)/2;
    if(v[mid]==element){
      return mid;
    }

    if(mid-1>=0 && v[mid]<v[mid-1] && mid+1<v.size() && v[mid]<v[mid+1]){
      if(element>v[mid]){
        low=mid+1;
        return search(v,low,high, element);
      } else {
        high=mid-1;
        return search(v,low,high, element);
        }
      }
      else {
      int index= search(v, low, mid-1, element);
      if(index!=-1){
        return index;
      }
      return search(v, mid+1, high, element);
    }
  }

int main(){

    int n,i;
    cin>>n;
    vector<int> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }

    int low=0;
    int high=n-1;
    int mid;
    bool found=false;
    int element;
    cin>>element;
     // 5 6 7 1 2 3 4

    cout<<search(v,low,high,element);
  return 0;
}
