#include <iostream>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> idealOrder;
    queue<int> q;
    int i,ele;
    idealOrder.resize(n);
    for(i=0;i<n;i++){
      cin>>ele;
      q.push(ele);
    }

    for(i=0;i<n;i++){
      cin>>idealOrder[i];
    }

    int k=0;
    int time=0;
    while(k<n && !q.empty()){
      if(idealOrder[k]==q.front()){
        q.pop();
        k++;
        time += 1;
      }
      else {
        q.push(q.front());
        q.pop();
        time += 1;
      }
    }

  cout<<time<<endl;
  return 0;
}
