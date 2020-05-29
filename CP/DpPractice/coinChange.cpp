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

void printVector(vector<int> &ans){
  cout<<"One solution is"<<endl;
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

void makeChange(int coins[], int size, int i, vector<int> &ans, int value, int itr){
  // cout<<"Value is "<<value<<endl;
  if(i<0){
    // cout<<"i is negative"<<endl;
    return;
  }
  if(value-coins[i]>=0){
    // cout<<"Subtracting "<<coins[i]<<endl;
    value-=coins[i];
    ans.push_back(coins[i]);
    makeChange(coins, i, ans, value, itr);
  } else {
    // cout<<"Getting to next interation "<<endl;
    makeChange(coins, i-1, ans, value, itr);
  }
  if(value==0){
    // cout<<"Pushing "<<coins[i]<<endl;
    ans.push_back(coins[i]);
    printVector(ans);
    itr=itr+1;
    ans.clear();
    makeChange(coins, , ans, value, itr);
    return;
  }
}

int main(){
    int coins[] = {1, 5, 10, 25};
    vector<int> ans;
    int value=49;
    makeChange(coins, 3, ans, value, 0);
    return 0;
}
