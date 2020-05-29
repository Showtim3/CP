

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool checkIfDuplicate(string str){
	vector<pair<int, int> > positions;
	positions.reserve(str.length());

	stack<int> s;
	int i;

for(i=0;i<str.length();i++){
	if(str[i]=='('){
		s.push(i);
	}
	if(str[i]==')'){
		positions.push_back(make_pair(s.top(), i));
		s.pop();
	}
}

sort(positions.begin(), positions.end());

for(i=0;i<positions.size()-1;i++){
	if(positions[i].first+1==positions[i+1].first && positions[i].second==positions[i+1].second+1){
		return true;
	}
}

return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool duplicate = checkIfDuplicate(s);
		if(duplicate){
			cout<<"Duplicate"<<endl;
		} else cout<<"Not Duplicates"<<endl;
	}
}
