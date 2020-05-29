#include <iostream>
#include <set>
#include <list>
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
    int k;
    cin>>k;

    list<int> q;
    q.push_back(v[0]);
    for(i=1;i<n;i++){
      q.push_back(max(v[i], v[i-1]));
    }
    for(i=0;i<k-1;i++){
      q.pop_front();
    }
    for(auto x: q){
      cout<<x<<" ";
    } cout<<endl;
  return 0;
}
