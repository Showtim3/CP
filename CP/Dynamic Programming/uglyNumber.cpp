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

int main(){
    lli i, n, mul2=0, mul3=0, mul5=0, ind2=0, ind3=0, ind5=0;
    lli a[200];
    a[0]=1;
    n=151;
    for(i=1;i<n;i++){
      mul2 = a[ind2] * 2;
      mul3 = a[ind3] * 3;
      mul5 = a[ind5] * 5;
      lli nextNumber = min(mul2, min(mul3, mul5));
      a[i]=nextNumber;
      if(nextNumber%2==0){
        ind2++;
      }
      if(nextNumber%3==0){
        ind3++;
      }
      if(nextNumber%5==0){
        ind5++;
      }
    }
    for(i=0;i<n;i++){
      cout<<a[i]<<" ";
    } cout<<endl;
  return 0;
}
