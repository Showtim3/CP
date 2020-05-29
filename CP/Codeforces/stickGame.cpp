#include<iostream>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;

    int itr=0;
    while(n!=0 && m!=0){
      n-=1;
      m-=1;
      itr++;
    }
    if(itr&1){
      cout<<"Akshat"<<endl;
    } else cout<<"Malvika"<<endl;
    }
    return 0;
}
