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

void getAllIndices(int a[], vector<int> &ans,int number, int i, int size){
  if(i==size){
    return;
  }
  if(a[i]==number){
    ans.push_back(i);
  }
  getAllIndices(a,ans,number,i+1,size);
}

vector<int> getAllIndices(int a[], int number, int i, int size){
  vector<int> ans;
  getAllIndices(a,ans, number,i,size);
  return ans;
}

int main(){

    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int number;
    cin>>number;
    vector<int> indices = getAllIndices(a,number,0,n);

    for(int i=0;i<indices.size();i++){
      cout<<indices[i]<<" ";
    }
    cout<<endl;



  return 0;
}
