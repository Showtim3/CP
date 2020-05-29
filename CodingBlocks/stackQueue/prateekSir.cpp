#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

int main(){

    int q;
    cin>>q;
    stack<int> s;
    int ch; int value;

    while(q--){
      cin>>ch;
        if(ch==2){
          cin>>value;
          s.push(value);
        }
        else {
          if(s.size()){
            cout<<s.top()<<endl;
            s.pop();
          }
        }
    }
  return 0;
}
