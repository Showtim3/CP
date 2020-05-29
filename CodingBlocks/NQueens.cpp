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

int board[11][11]={0};

bool isSafe(int i, int j, int n){
  int row= i;
  int column=j;
  int k;
  for(k=0;k<n;k++){
    if(board[k][j]==1){
      return false;
    }
  }
  //Checking left diagonal
  while(row>=0 && column>=0){
    if(board[row][column]==1){
      return false;
    }
    row--;
    column--;
  }
  //Checking right diagonal
  row=i;
  column=j;
  while(row>=0 && column<n){
    if(board[row][column]==1){
      return false;
    }
    row--;
    column++;
  }
  return true;
}

bool findConfiguration(int i,int j,int n){
    if(i<0 || j>=n){
      return false;
    }
    if(i==n){
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          cout<<board[i][j]<<" ";
        } cout<<endl;
      }
      return true;
    }
    bool valid;
    if(isSafe(i,j,n)){
        board[i][j]=1;
        valid = findConfiguration(i+1,0,n);
        if(!valid) {
          board[i][j]=0;
          valid = findConfiguration(i,j+1,n);
        }
    } else {
      valid = findConfiguration(i,j+1,n);
      if(!valid) {
        board[i][j]=0;
        valid = findConfiguration(i,j+1,n);
      }
    }
    return valid;
}



int main(){

    int t;
    cin>>t;

    while(t--){
      int n=5;
      cin>>n;
      cout<<findConfiguration(0,0,n);
    }
  return 0;
}
