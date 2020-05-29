#include<iostream>
#include<vector>
#include<map>
#define lli long long int
using namespace std;


void populateString(string str, vector<string> &jumpingNumbers, int n){
  if(str.length()>n){
    return;
  }
  jumpingNumbers.push_back(str);
  int increment = int(str[str.length()-1]-'0') + 1;
  int decrement = int(str[str.length()-1]-'0') - 1;
  if(increment<=9){
    str+=to_string(increment);
    jumpingNumbers.push_back(str);
    populateString(str, jumpingNumbers, n);
    str.pop_back();
  }
  if(decrement>=0){
    str+=to_string(decrement);
    jumpingNumbers.push_back(to_string(decrement));
    jumpingNumbers.push_back(str);
    populateString(str, jumpingNumbers, n);
    str.pop_back();
  }
}

vector<string> getJumpingNumbers(string n) {
  vector<string> jumpingNumbers;
  int i,j,k;
  for(i=0;i<=9;i++){
    populateString(to_string(i), jumpingNumbers,n.length());
  }
  return jumpingNumbers;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    lli n;
	    cin>>n;
	    vector<string> ans = getJumpingNumbers(to_string(n));

      map<lli,lli> numbers;
      for(lli i=0;i<ans.size();i++){
        lli num = stoi(ans[i]);
        if(num<=n){
        numbers.insert(make_pair(stoi(ans[i]), 1));
        }
      }

      for(auto x: numbers){
        cout<<x.first<<" ";
      } cout<<endl;
	}
	return 0;
}
