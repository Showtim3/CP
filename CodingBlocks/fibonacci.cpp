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

    int n,i,j;
    cin>>n;
    int a[110];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    int terms = (n*(n+1))/2;
    for(i=3;i<terms;i++){
      a[i]=a[i-1]+a[i-2];
    }
    int k=0;
    for(i=0;i<n;i++){
      for(j=0;j<=i;j++){
        cout<<a[k]<<"\t";
        k++;
      }
      cout<<endl;
    }
  return 0;
}
