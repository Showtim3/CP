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

    int t;
    cin>>t;

    while(t--){
      int n,k;
      cin>>n>>k;
      vector<int> a;
      int j=0,i;
      int maxLength=0, currentLength=0;
      int uniqueCount=0;
      int count[k+1];
      int ele;
      a.reserve(n);

      for(i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
      }

      for(i=1;i<=k;i++){
        count[i]=0;
      }
      bool wholeArray = true;
      for(i=0;i<n;i++){
        if(count[a[i]]==0){
          uniqueCount++;
        }
        count[a[i]]++;
        currentLength++;
        if(uniqueCount==k) {
          wholeArray = false;
          maxLength=max(maxLength,currentLength-1);
          while(uniqueCount == k){
            count[a[j]]--;
            if(count[a[j]]==0){
              uniqueCount--;
            }
            currentLength--;
            j++;
          }
        } else {
          maxLength=max(maxLength,currentLength);
        }
      }
      if(wholeArray){
        cout<<n<<endl;
      } else {
        cout<<maxLength<<endl;
      }

      a.clear();
    }

  return 0;
}
