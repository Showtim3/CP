#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    vector<int> prefix;
	    prefix.reserve(n);
	    v.reserve(n);
	   int sum=0,i;
     for(i=0;i<n;i++){
       int ele;
       cin>>ele;
       v.push_back(ele);
     }
	    for(i=0;i<n;i++){
	        sum+=v[i];
          prefix.push_back(sum);
	    }
	    bool ans=0; set<int> s;
	    for(auto x: prefix){
	        if(s.count(x) || x==0){
	            ans=true;
	            break;
	        } else s.insert(x);
	    }
	    if(ans) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    s.clear();
	    v.clear();
	    prefix.clear();
	}
	return 0;
}
