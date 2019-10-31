#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int a[6][6];
    int i,j,hourglassSum=0,max=INT_MIN;
    for(i=0;i<6;i++){
      for(j=0;j<6;j++){
        cin>>a[i][j];
      }
    }

    for(i=0;i<=3;i++){
      for(j=0;j<=3;j++){
        cout<<a[i][j]<<" "<<a[i][j+1]<<" "<<a[i][j+2]<<" "<<endl;
        cout<<"  "<<a[i+1][j+1]<<endl;
        cout<<a[i+2][j]<<" "<<a[i+2][j+1]<<" "<<a[i+2][j+2]<<endl;
        hourglassSum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j]  + a[i+2][j+1]  + a[i+2][j+2] ;
        cout<<"===================================="<<endl<<hourglassSum<<endl;
        if(max<hourglassSum){
          max = hourglassSum;
        }
      }

    }
    cout<<max<<endl;
  return 0;
}
