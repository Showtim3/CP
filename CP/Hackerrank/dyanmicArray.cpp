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

int main(){

    li n,q;
    cin>>n>>q;
    int choice;
    li x,y;
    vector<vector<int> >v;
    v.resize(n);
    li lastAnswer = 0;
    while(q--){
      cin>>choice>>x>>y;
      if(choice == 1){
        v[(lastAnswer ^ x) % n].push_back(y);
      } else {
        lastAnswer = v[(lastAnswer ^ x) % n][y];
        cout<<lastAnswer<<endl;
      }
    }
  return 0;
}
