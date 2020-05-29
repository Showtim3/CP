#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m,k,s;
	int i,j;
	cin>>n>>m>>k>>s;
  char a[100][100];
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
		cin>>a[i][j];
	}
}

	bool ans=true;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
      if(s<k){
        ans=false;
        break;
      }
			if(a[i][j]=='.'){
        // cout<<"Subtracting 2"<<endl;
        s-=2;
			} else if(a[i][j]=='*'){
        // cout<<"Adding 5"<<endl;
				s+=5;
			} else if(a[i][j]=='#'){
        // cout<<"Breaking"<<endl;
				break;
			}
      if(j!=m-1){
        // cout<<"Subtracting 1"<<endl;
        s--;
      }
		}
    // cout<<"After "<<i+1<<" aength "<<s<<endl;
    if(!ans){
      ans=false;
      break;
    }
	}
	if(ans){
		cout<<"Yes"<<endl;
		cout<<s;
	} else cout<<"No"<<endl;
	return 0;
}
