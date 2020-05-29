#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
	int n;
	cin>>n;
	bool increasing = false;
	bool decreasing = true;
	bool ans=true;
  int a;
  if(n>=1){
  	cin>>a;
    n-=1;
  }

	while(n--){
		int b;
		cin>>b;
		// 10 12 11
		if(decreasing && b>=a){
      cout<<"if"<<endl;
			increasing = true;
      decreasing = false;
		} else {
      if(increasing && b<=a){
        cout<<"elseif"<<endl;
        ans=false;
      }
    }
		a=b;
	}
	if(ans) cout<<"true"<<endl;
	else cout<<"false"<<endl;
}
	return 0;
}
