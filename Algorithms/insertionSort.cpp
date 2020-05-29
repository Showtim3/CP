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

    int arr[]= {8,5,11,15,6,22,18};
    int n=sizeof(arr)/sizeof(arr[0]);

    int j;
    for(int i=0;i<n;i++){
      j=i;
      int ele=arr[j];
      while(j>0 && arr[j-1]>arr[j]){
        arr[j]=arr[j-1];
        j--;
      }
      arr[j]= ele;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  return 0;
}
