//incomplete for now

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

// m boxes
int main(){

    li t;
    cin>>t;
    li n,m;
    vector<li> v;
    li ele;
    li i;

    while(t--){
      cin>>n>>m;
      for(i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
      }

      m=3
      [1 2 3] [4 5 6] [7 8 9] [10 11 12] [13 14 15]
      [1 4 7 10 13] [2 5 8 11 14] [3 6 9 12 15]



      li sum = INT_MAX;
      li temp = INT_MAX;
      for(i=0;i<n;i++){
        while(i < n){
          temp+= v[i];
          i+=m;
        }
        if(temp < sum) {
          sum = temp;
        }
      }
      cout<<sum<<endl;
    }
  return 0;
}
