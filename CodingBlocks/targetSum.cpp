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

void printTargetSumPairs(int a[], int n, int target){
  int i;
  map<int,bool> m;
  vector<pair<int,int> > ans;
  for(i=0;i<n;i++) {
    if(m.find(target-a[i])->second){
		int first = target-a[i];
		int second = a[i];
        ans.push_back(make_pair(min(first,second), max(fist,second)));
	  }
      m.insert({a[i], true});
    }
    sort(ans.begin(), ans.end());
    for(i=0;i<ans.size();i++){
      cout<<ans[i].first<<" and "<<ans[i].second<<endl;
    }
  return;
}

int main(){
  int n,i;
  cin>>n;
  int a[1010];
  int target;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>target;

  printTargetSumPairs(a,n,target);


  return 0;
}
