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

vector<int> returnSumArray(vector<int> a, vector<int> b,int n, int m){
  int i=0, sum;
  vector<int> ans;
  int carry=0;
  while(i!=m){
    sum=a[n-1-i] + carry + b[m-1-i];
    carry = sum/10;
    ans.push_back(sum%10);
    i++;
  }
  for(;i<n;i++){
    sum=carry + a[n-1-i];
    carry = sum/10;
    ans.push_back(sum%10);
  }
  
  if(carry){
    ans.push_back(carry);
  }
  return ans;
}

int main(){

      int n,m;

      vector<int> a;
      vector<int> b;
      int ele,i;
      cin>>n;
      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }
      cin>>m;
      for(i=0;i<m;i++){
        cin>>ele;
        b.push_back(ele);
      }
      vector<int> ans;
      if(n>m){
        ans = returnSumArray(a,b,n,m);
      } else {
        ans = returnSumArray(b,a,m,n);
      }
      for(i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<", ";
      }
      cout<<"END"<<endl;

  return 0;
}
