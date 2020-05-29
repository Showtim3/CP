#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int i,ele;
    set<int> s;
    for(i=0;i<n*m;i++){
      char ele;
      cin>>ele;
      s.insert(ele);
    }
    if(s.count('C')||s.count('M')||s.count('Y')){
      cout<<"#Color"<<endl;
    } else cout<<"#Black&White"<<endl;
  return 0;
}
