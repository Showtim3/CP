#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int n,i;
    cin>>n;

    set<int> s;
    li sum = 0;
    for(i=0;i<n;i++){
      int ele;
      cin>>ele;
      s.insert(ele);
    }

    for( auto x: s){
      sum+=x;
    }
    li avg;
    if(sum % s.size() == 0){
      avg = sum/s.size();
    } else avg = sum/s.size()+1;


    bool ans = true;
    li d = avg - *(s.begin());

    cout<<"avg is "<<avg<<endl;
    cout<<"d "<<d<<endl;

    for( auto x: s){
        if(x==avg){
        cout<<"if"<<endl;
        continue;
      } else if(x +d ==avg || x-d==avg){
        cout<<"if2"<<endl;
        continue;
      } else {
        cout<<"if3"<<endl;
        cout<<"v[i]"<<x<<endl;
        cout<<"v[i]+avg"<<x+avg<<endl;
        cout<<"v[i]+avg"<<x-avg<<endl;

        ans = false;
        break;
      }
    }
    ans ? cout<<d :cout<<-1;

  return 0;
}
