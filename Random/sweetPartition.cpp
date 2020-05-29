#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n,i;
    cin>>n;
    vector<int> v;
    vector<int> rightMin;
    for(i=0;i<n;i++){
      int ele;
      cin>>ele;
      v.push_back(ele);
    }
    rightMin.resize(n);
    rightMin[n-1] = v[n-1];
    for(i=n-2;i>=0;i--){
      rightMin[i] =min(rightMin[i+1],v[i]);
    }
    // for(auto x: rightMin){
    //   cout<<x<<" ";
    // } cout<<endl;
    map<int, int> m;
    for(i=0;i<n;i++){
      m[v[i]]=i;
    }
    int count=0;
    i=0;
    while(i<n){
      cout<<i<<endl;
      if(m.find(rightMin[i])!=m.end()){
        cout<<"Jumpint to "<<m[rightMin[i]]+1<<endl;
        i+=m[rightMin[i]]+1;
        count++;
      } else {
        cout<<"Incrementing by 1"<<endl;
        i++;
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
