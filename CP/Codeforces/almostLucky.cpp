#include <iostream>

using namespace std;
int luckyNumber[9]= {4,7,44,47,77,444,447,477,777};

int main(){

  int n;
  cin>>n;
  bool ans=0;
  for(int i=0;i<9;i++){
    if(n%luckyNumber[i]==0){
      ans=1;
      break;
    }
  }
  if(ans) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
