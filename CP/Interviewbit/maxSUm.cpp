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

vector<int> maxset(vector<int> &a) {
  vector<int> answer;

  int i=0,j=0;
  int n=a.size();
  li currentSum=0;
  li maxSum=0;
  while(i<n){
    if(a[i]>0){
      int(currentSum)=li(li(currentSum)+int(a[i]));
      j=i;
      while(j+1<n && a[j+1]>0){
        j++;
        int(currentSum)=int(int(currentSum)+int(a[j]));
        // cout<<"Adding"<<a[j]<<endl;
      }
      // cout<<currentSum<<endl;
      if(int(maxSum)<int(currentSum)){
        maxSum=max(maxSum, currentSum);
        // cout<<maxSum<<" "<<currentSum<<endl;
        // cout<<"Filling small"<<i<<" "<<j<<endl;
        answer.clear();
        for(int k=i;k<=j;k++){
          answer.push_back(a[k]);
        }
      } else if(int(maxSum)==int(currentSum)){
        // cout<<maxSum<<" "<<currentSum<<endl;
        // cout<<"Filling equal"<<i<<" "<<j-1<<endl;
        if(answer.size()<j-i+1){
          answer.clear();
          for(int k=i;k<=j;k++){
            answer.push_back(a[k]);
          }
        }
      }
      i=j+1;
    } else if(a[i]==0 && !answer.size()){
      answer.push_back(i);
      answer.push_back(i);
    }
    else{
      currentSum=0;
      i++;
    }
  }
  // cout<<"Done";
  return answer;
}


int main(){

    int t;
    cin>>t;

    while(t--){
      vector<int> a;
      int n;
      cin>>n;
      a.resize(n+1);
      int i;
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      vector<int> answer = maxset(a);
      for(i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
      }
      a.clear();
    }
  return 0;
}
