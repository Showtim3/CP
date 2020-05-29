#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){
    vector<int> v;
    v.resize(1001);
    int i;
    v[1]=0;
    v[2]=1;
    v[3]=1;

    for(i=4;i<=1000;i++){
        if(i%2==0 && i%3==0){
          v[i]=min(v[i-1], min(v[i/2], v[i/3])) +1;
        } else if(i%2==0){
          v[i]=min(v[i-1], v[i/2]) + 1;
        } else if(i%3==0){
          v[i]=min(v[i-1], v[i/3]) + 1;
        } else {
          v[i]=v[i-1] + 1;
        }
    }

    for(i=0;i<=1000;i++){
      cout<<i<<": "<<v[i]<<endl;
    }
  return 0;
}
