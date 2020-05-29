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

int getMaximumValue(int weight[], int value[], int W, int currentW, int i) {
  if(i<0) return 0;
  if(currentW+weight[i]<=W){
    return max(value[i]+ getMaximumValue(weight, value, W, currentW+weight[i], i-1),
        getMaximumValue(weight, value, W, currentW,i-1));
  } else {
    return getMaximumValue(weight, value, W, currentW,i-1);
  }
}

int solveDp(){

    for()
}
int main(){

    int n,W;
    cin>>n>>W;
    int i;
    int weight[100], value[100];
    for(i=0;i<n;i++){
      cin>>weight[i];
    }
    for(i=0;i<n;i++){
      cin>>value[i];
    }

    cout<< getMaximumValue(weight, value, W,0,n-1);
  return 0;
}
