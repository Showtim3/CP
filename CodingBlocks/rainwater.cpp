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
      int n,i;
      cin>>n;
      int a[1000];
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      int maxRight[n];
      int maxLeft[n];
      int j;

      for(i=0;i<n;i++){
        int maxl=0;
        int maxr=0;
        for(j=0;j<i;j++){
          if(a[j]>maxl){
            maxl=a[j];
          }
        }
        for(j=i;j<n;j++){
          if(a[j]>maxr){
            maxr=a[j];
          }
        }
        maxLeft[i]= maxl;
        maxRight[i]= maxr;
      }
      maxRight[n-1]=0;
      maxLeft[0]=0;
      int totalRainCollected = 0;
      int height;
      for(i=0;i<n;i++){
        if(i==0){
          continue;
        }
        if(i==n-1){
          continue;
        }
        if(maxLeft[i]>a[i]&&maxRight[i]>a[i]){
        height = min(maxLeft[i],maxRight[i]);
        height = height - a[i];
        // cout<<i<<" "<<height<<endl;
        totalRainCollected+=height;
      }
      }
      // for(i=0;i<n;i++){
      //   cout<<maxLeft[i]<<" ";
      // }
      // cout<<endl;
      // for(i=0;i<n;i++){
      //   cout<<maxRight[i]<<" ";
      // }
      cout<<totalRainCollected<<endl;

  return 0;
}
