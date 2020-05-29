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

void printAllSubArray(int a[], int n){
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=i;k<=j;k++){
        cout<<a[k]<<" ";
      }
      cout<<endl;
    }
  }
}
int main(){

    int a[]= {1,4,5,6,7,10,15};
    int n = sizeof(a)/sizeof(a[0]);
    printAllSubArray(a, n);
    cout<<"Done"<<endl;
  return 0;
}
