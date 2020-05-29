// { Driver Code Starts
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int maxLen(int A[], int n, int k);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N,k;
        cin >> N>>k;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        cout << maxLen(A, N, k) << endl;
    }
}
// } Driver Code Ends
/*You are required to complete this function*/
int maxLen(int A[], int n, int k) {
    // Your code here
    int i, sum=0;
    vector<int> prefix;
    prefix.reserve(n);
    for(i=0;i<n;i++){
      sum+=A[i];
      prefix.push_back(sum);
    }

    bool ans=0; map<int,int> mp;
    int longest=0;

    for(i=0;i<n;i++){
      if(prefix[i]==k){  longest=max(longest, i+1);}
      if(mp.count(prefix[i]-k)){
          longest=max(longest,i - mp[prefix[i]-k]);
          if(!mp[prefix[i]]) mp[prefix[i]] = i;
      }
      else {
        if(!mp.count(prefix[i]))
         mp[prefix[i]]=i;
      }
  }

 return longest;
}
