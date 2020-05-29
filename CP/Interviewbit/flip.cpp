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

vector<int> flip(string A) {
	int i=0,j=0;
	int currentMax=0,totalMax=-1;
	int n= A.length();
	vector<int> answer;
	int startPos=-1,endPos=-1;
	bool flipped=false;
for(i=0;i<n;i++){
	cout<<i<<endl;
	if(A[i]=='1'){
		if(flipped){
			currentMax--;
		} else {
			currentMax++;
		}
	} else {
		if(flipped){
			currentMax++;
		} else {
			flipped=true;
			startPos=i;
			currentMax++;
		}
	}
	if(totalMax<currentMax){
		totalMax= max(totalMax,currentMax);
		endPos=i;
		answer.clear();
		if(startPos!=-1)
			answer.push_back(startPos);
			answer.push_back(endPos);
	}
	if(currentMax<0){

		// i=endPos;
		flipped=false;
	}
  }
	cout<<"Done";
	return answer;
}

int main(){

    int t;
    t=100;

    while(t--){
      string s;
      cin>>s;
      vector<int> ans = flip(s);
			// cout<<ans.size()<<endl;
      for(int i=0;i<ans.size();i++){
        cout<<ans[i]+1<<" ";
      }
      cout<<endl;
      ans.clear();
    }
  return 0;
}
