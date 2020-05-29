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

vector<int>repeatedNumber(vector<int> &A) {
  vector<int> ans;
  li sum=0;
  li sumSq=0;
  int n= A.size();
      for(int i=0;i<n;i++){
        sum+=A[i];
        sumSq+=A[i]*A[i];
      }
    li sumN;
    li sumsqN;

      if(n%2==0){
          sumN=(n/2)*(n+1);
          sumsqN = (n/2*(n+1)*(2*n+1))/4;
      } else {
          sumN=n*((n+1)/2);
          sumsqN = (n*((n+1)/2)*((2*n)+1)/2)/2;
      }

      li diff = sumN - sum;
      // sumsqN = (n*(n+1)*(2*n+1))/6;
      // sumN = (n+1)/2*n;
      li second = (sumsqN - sumSq)/diff;
      li first= (diff + second) /2;
      li sec = first - diff;
      ans.push_back(first);
      ans.push_back(sec);
      return ans;
}

int main() {
vector<int> A;
A.push_back(3);
A.push_back(1);
A.push_back(2);
A.push_back(5);
A.push_back(3);

vector<int> ans;
ans = repeatedNumber(A);
for(int i=0;i<=1;i++){
  cout<<ans[i]<<" ";
}
  return 0;
}
