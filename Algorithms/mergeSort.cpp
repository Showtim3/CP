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


void merge(int arr[], int sPos, int endPos){
  int mPos = (sPos+endPos)/2;
  int i=sPos, j=mPos+1, k=sPos;
  int temp[100];
  for (int i=sPos;i<=endPos;i++) temp[i]=arr[i];
  while(i<=mPos && j<=endPos){
    if(temp[i]<temp[j]) arr[k++]=temp[i++];
    else arr[k++]=temp[j++];
  }
  while (i<=mPos) arr[k++]=temp[i++];
  while (j<=endPos) arr[k++]=temp[j++];

}

void mergeSortArray(int a[], int sPos, int endPos){
  if(sPos>=endPos) return;
  int mid = (sPos+endPos)/2;
  mergeSortArray(a, 0, mid);
  mergeSortArray(a, mid+1, endPos);
  merge(a,sPos,endPos);
}


int main(){
    // int a[]= {11,4,8,14,55,3,66,91,54};
    int a[]= {11,4,8,55,14};
    int n = sizeof(a)/sizeof(a[0]);

    mergeSortArray(a,0,n);
    cout<<"Array after sort"<<endl;
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  return 0;
}
