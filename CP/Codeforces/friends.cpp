#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>

#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    li n,k;
    li id;
    li ele;
    deque<li> q;
    map<li, bool> m;
    vector<li> v;
    li i;

    cin>>n>>k;
    v.reserve(n);

    for(i=0;i<n;i++){
      cin>>ele;
      v.push_back(ele);
    }


    for(i=0;i<n;i++){
      if(m.find(v[i]) == m.end()){
        m.insert(make_pair(v[i],true));
        if(q.size()<k) {
            // cout<<"Simple inseting"<<endl;
            q.push_front(v[i]);
            // cout<<i<<" Q :";
            // for(auto x: q){
            //   cout<<x<<" ";
            // }
        } else {
          // cout<<"pop and insert"<<endl;
          li last = q.back();
          m.erase(last);
          q.pop_back();
          q.push_front(v[i]);
        }
      }
    }

    cout<<q.size()<<endl;
    for(auto x: q){
      cout<<x<<" ";
    }

  return 0;
}
