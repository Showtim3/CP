//Implement a queue using two stacks

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <stack>
#include <cmath>

#define li long int
#define ll long long
#define lli long long int

using namespace std;
// 1 push_back
int main(){

    int q;
    stack<li> s1;
    stack<li> s2;
    bool first = true;
    li ele;
    cin>>q;
    int choice;
    while(q--) {
      cin>>choice;
      if(choice == 1){
        cin>>ele;
        s1.push(ele);
      }
      if(choice==2){
        if(first){
          while(!s1.empty()) {
          li ele = s1.top();
          s2.push(ele);
          s1.pop();
          }
          s2.pop();
          first = false;
        } else {
          while(!s2.empty()){
          li ele = s2.top();
          s1.push(ele);
          s2.pop();
        }
          s1.pop();
          first=true;
          }
        }
      if(choice==3){
        if(first){
          while(!s1.empty()) {
          li ele = s1.top();
          s2.push(ele);
          s1.pop();
          }
          cout<<s2.top();
          first = false;
        } else {
          while(!s2.empty()){
          li ele = s2.top();
          s1.push(ele);
          s2.pop();
        }
          cout<<s1.top()<<endl;
          first=true;
        }
        }
      }

  return 0;
}
