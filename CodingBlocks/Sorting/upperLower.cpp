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

    int n;
    cin>>n;

    int i;
    vector<int> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }

    int q;
    cin>>q;
    int element;
    while(q--){
      cin>>element;
      int low=0;
      int mid=-1;
      int high=n-1;
      bool found=false;
      while(low<=high){
        mid=(low+high)/2;

        if(v[mid]==element){
          found=true;
          break;
        }
        if(v[mid]>element){
          high=mid-1;
        } else {
          low=mid+1;
        }
      }
      // 1 2 3 3 3 3 3 34 5
      if(found){
          int k=mid;
          int first=k,end=k;
          while(first>=0){
            if(v[first-1]==v[mid]){
              first--;
            } else {
              break;
            }
          }

          while(end<n){
            if(v[end+1]==v[mid]){
              end++;
            } else {
              break;
            }
          }
          cout<<first<<" "<<end<<endl;
      } else cout<<-1<<" "<<-1<<endl;

    }

  return 0;
}
