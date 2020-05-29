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


int calculateMaxGold(int gold[][100], int n, int m)
{
 int goldMine[1000][1000];
 int i,j;
 for(i=0;i<n;i++){
   for(j=0;j<m;j++){
     goldMine[i][j]=0;
   }
 }
 for(j=m-1;j>=0;j--){
   for(i=0;i<n;i++) {
     int right = goldMine[i][j+1];
     int rightTop = goldMine[i-1][j+1];
     int rightBottom = goldMine[i+1][j+1];
     if(i==0) {
       rightTop = 0;
     }
     if(i==n-1){
       rightBottom =0;
     }
     if(j==m-1){
       rightTop =0;
       rightBottom=0;
       right=0;
     }
     goldMine[i][j]=gold[i][j] + max(right, max(rightTop, rightBottom));
   }
 }
 // for(i=0;i<n;i++){
 //   for(j=0;j<m;j++){
 //     cout<<goldMine[i][j]<<" ";
 //   }
 //   cout<<endl;
 // }
 int max = goldMine[0][0];
 for(i=0;i<n;i++){
   if(goldMine[i][0]>max){
     max = goldMine[i][0];
   }
 }
 return max;
}

int main(){

    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;

    int i,j;
    int gold[100][100];

    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        cin>>gold[i][j];
      }
    }

    int maxGold = calculateMaxGold(gold,n,m);
    cout<<maxGold<<endl;
}
    return 0;
}
