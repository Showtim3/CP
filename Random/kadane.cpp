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


int findMaxSubArray(int a[],int n){
  int max=0;
  int current_max=0;
  for(int i=0;i<n;i++){
    current_max+=a[i];
    cout<<"current_max: "<<current_max<<endl;
    if(current_max<0){
      current_max=0;
    }
    if(current_max>max){
      max=current_max;
    }
  }
  return max;
}

int main(){
  int a[] = {-4,1,3,-2,6,2,-8,-9,4};
  int n=sizeof(a)/sizeof(a[0]);
  int max = findMaxSubArray(a,n);
  cout<<max<<endl;
  return 0;
}
