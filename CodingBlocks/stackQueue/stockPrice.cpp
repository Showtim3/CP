#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ele,i;
	vector<int> v;
	v.reserve(n);
	for(i=0;i<n;i++){
		cin>>ele;
		v.push_back(ele);
	}
	vector<int> answer;
	int count=1;
	answer.reserve(n);
	answer.push_back(1);
	for(i=1;i<n;i++){
		if(v[i]>=v[i-1]){
			count++;
		} else {
			count=1;
		}
		answer.push_back(count);
	}
	for(i=0;i<n;i++){
		cout<<answer[i]<<" ";
	}
	cout<<"END"<<endl;
	return 0;
}
