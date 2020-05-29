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

void printWave(int a[][11], int n, int m){
    int i,j;
    bool odd = true;
    int ind;
    for(int j=0;j<m;j++) {
      for(int i=0;i<n;i++) {
        if(!odd) {
          ind = n-i-1;
        } else {
          ind = i;
        }
        cout<<a[ind][j]<<", ";
      }
      odd=!odd;
    }
    cout<<"END"<<endl;
}

int main(){
    int n,m,i,j;
    cin>>n>>m;
    int a[11][11];
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    printWave(a,n,m);
    return 0;
}
