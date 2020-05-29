#include<iostream>
#include<vector>
using namespace std;
int main(){

	int n;
	cin>>n;
	vector<int> v;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int low=0;
	int high=n-1;
	int mid;
	int ans=-1;
	while(low<=high){
		mid = (low+high)/2;
		if(mid+1<n && v[mid]>v[mid+1]) {
			ans=mid;
			break;
		}
		if(mid-1>0 && v[mid]<v[mid-1]) {
			ans=mid-1;
			break;
		}
		if(v[high]<v[mid]) {
			low=mid+1;
		} else {
			high=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
