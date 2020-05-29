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


int findIndex(int a[][40],int n, int m, int element){
  int smallest = a[0][0];
  int largest = a[n-1][m-1];

  if(element<smallest || element>largest){
    return 0;
  }

  int i=0,j=m-1;
  while(i<=n-1 && j>=0){
    if(a[i][j]==element){
      return 1;
    }
    if(a[i][j]>element){
      j--;
    } else {
      i++;
    }
  }

  return 0;
}
int main(){
  // int t;
  // cin>>t;
  // while(t--){
    int n,m;
    cin>>n>>m;
    int i,j;
    int a[40][40];
    for(i=0;i<n;i++){
      for(j =0;j<m;j++){
        cin>>a[i][j];
      }
    }
    int ele;
    cin>>ele;

    cout<<findIndex(a,n,m,ele)<<endl;
  // }
  return 0;
}
