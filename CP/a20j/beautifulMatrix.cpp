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

    int matrix[5][5];
    int i,j;
    int row=0;
    int col=0;
    for(i=0;i<5;i++){
      for(j=0;j<5;j++){
        cin>>matrix[i][j];
        if(matrix[i][j]==1){
          row=i;
          col=j;
        }
      }
    }

    int ans = abs(row-2) + abs(col-2);
    cout<<ans<<endl;
  return 0;
}
