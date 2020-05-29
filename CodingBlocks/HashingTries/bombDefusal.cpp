#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define li long int
using namespace std;

int main(){
	li n,k;
	cin>>n>>k;
	li i;
  vector<li> v;
	for(i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	if(k>=n){
		sort(v.begin(), v.end(), greater<int>());
	} else {
		map<li, li> m;
		for(i=0;i<n;i++){
			m.insert(make_pair(v[i],i));
		}
    for(i=0;i<n;i++){
      if(k<=0){
        break;
      }
      if(v[i]!=n-i){
        li indexPresent = m[n-i];
        m[n-i] = i;
        m[v[i]]=indexPresent;
        if(v[i]<v[indexPresent]){
          // cout<<"Swapping"<<i<<" "<<indexPresent<<" k : "<<k<<endl;
         swap(v[indexPresent], v[i]);
         k--;
        }
      }
    }
	}
	for(i=0;i<n;i++){
		cout<<v[i]<<" ";
	} cout<<endl;
	return 0;
}
