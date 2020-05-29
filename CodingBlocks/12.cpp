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


void reverseArray(int a[], int n, int i){
  if(i>=n/2){
    return;
  } else {
    int temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1]=temp;
    reverseArray(a, n, i+1);
  }
}

int main(){

  int a[11]={1,2,3,4,5,6,7,8,9,10,11};
  int n=11;

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  cout<<endl;

  reverseArray(a,n,0);

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  return 0;
}
