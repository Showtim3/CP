#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){

    int r,c,i,j;
    char a[100][100];
    cin>>r>>c;
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
        cin>>a[i][j];
      }
    }
    bool error;
    int row=0;
    int column=0;
    for(i=0;i<r;i++){
      error=false;
      for(j=0;j<c;j++){
        if(a[i][j]=='S'){
          error=true;break;
        }
      }
      if(!error){
        row++;
      }
    }
    for(i=0;i<c;i++){
      error=false;
      for(j=0;j<r;j++){
        if(a[j][i]=='S'){
          error=true;break;
        }
      }
      if(!error){
        column++;
      }
    }

    int totalBoxes = (row*c)+(column*r);
    int toDelete = row*column;
    int ans = totalBoxes - toDelete;
    cout<<ans<<endl;
  return 0;
}
