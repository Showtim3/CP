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
    vector<vector<int> > v;
    v.reserve(n);
    int i,j;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        int ele;
        cin>>ele;
        v[i].push_back(ele);
      }
    }

    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        swap(v[i][j],v[j][i]);
      }
    }


    for(i=0;i<n/2;i++){
      swap(v[i], v[n-i-1]);
    }

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        cout<<v[i][j]<<" ";
      }
      cout<<endl;
    }

  return 0;
}
