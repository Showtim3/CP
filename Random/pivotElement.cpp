#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> a){
  int n =a.size();
  int low=0;
  int high = n-1;
  int mid = (high+low)/2;
  while(low<=high){
    mid=(high+low)/2;
    // cout<<low<<" "<<mid<<" "<<high<<endl;
    if(mid < n-1 && a[mid]>a[mid+1]){
      return a[mid+1];
    }
    if(mid > 0 &&a[mid]<a[mid-1]){
      return a[mid];
    }
    if(a[low]>a[mid]){
      high=mid-1;
    } else {
      low=mid+1;
    }
  }

  return a[0];
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
      int n;
      cin>>n;
      vector<int> v;
      int ele,i;
      for(i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
      }
	    cout<<solve(v)<<endl;
	}
	return 0;













}
