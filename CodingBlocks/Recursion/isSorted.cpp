#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> v, int i){
	if(i==int(v.size())-1){
		return true;
	}
	return (v[i]<v[i+1] && isSorted(v,i+1));
}

int main() {
  int t;
  cin>>t;
  while(t--){
	int n;
	cin>>n;
	vector<int> v;
	v.reserve(n);
  int ele;
	for(int i=0;i<n;i++){
    cin>>ele; 
		v.push_back(ele);
	}
	if(isSorted(v,0)){
		cout<<"true"<<endl;
	} else cout<<"false"<<endl;
  v.clear();
}
	return 0;
}
