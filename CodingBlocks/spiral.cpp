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
// int t;
// cin>>t;
// while(t--){


    int n,m;
    cin>>n>>m;
    int i,j;
    int a[11][11];
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
// down right up left

    bool visited[i][j];
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        visited[i][j]=false;
      }
    }
    int count = 0;
    bool down=true, right=false, up=false,left=false;
    i=0;j=0;
    while(1){
      if(count==n*m) {
           break;
         }
      if(down){
        if(!visited[i][j]){
          count++;
          cout<<a[i][j]<<", ";
          visited[i][j]=true;
        }
        if(i+1<n && !visited[i+1][j]){
            i+=1;
        }
        else {
          down=false;
          right=true;
        }
      }
      if(right){
        if(!visited[i][j]){
          count++;
          cout<<a[i][j]<<", ";
          visited[i][j]=true;
        }
        if(j+1<m && !visited[i][j+1]){
          j+=1;
        } else {
          right=false;
          up=true;
        }
      }
      if(up){
        if(!visited[i][j]){
          count++;
          cout<<a[i][j]<<", ";
          visited[i][j]=true;
        }
        if(i-1>=0 && !visited[i-1][j]){
          i-=1;
        } else {
          up=false;
          left=true;
        }
      }
      if(left){
        if(!visited[i][j]){
          count++;
          cout<<a[i][j]<<", ";
          visited[i][j]=true;
        }
        if(j-1>=0 && !visited[i][j-1]){
          j-=1;
        } else {
          left=false;
          down=true;
        }
      }

    }
    cout<<"END"<<endl;
  // }
  return 0;
}
