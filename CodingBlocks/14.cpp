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

void RecurBubbleSort(int a[], int n){
  bool swap = false;
  int j=0;

  for(int i=0,j=i+1;j<n;i++,j++){
    if(a[i]>a[j]){
      int temp = a[i];
      a[i]=a[j];
      a[j]=temp;
      swap=true;
    }
  }

  if (swap==false) return;
  else RecurBubbleSort(a,n);
}

int main(){
  int a[10] = {12,23,34,11,37,59,17,88,93,66};
  int n = 10;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  RecurBubbleSort(a,n);
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  return 0;
}
