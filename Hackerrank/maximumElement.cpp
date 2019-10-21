//https://www.hackerrank.com/challenges/maximum-element/problem

#include<iostream>
#include <stack>
#include<set>

#define ll long long
#define lli long long int

using namespace std;

/*
1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.
*/
int main(){

    int t;
    stack<lli> stk;
    cin>>t;
    multiset <int, greater <int> >s;

    int ch;
    lli number;
    while(t--){

      cin>>ch;
      if(ch==1){
        cin>>number;
        s.insert(number);
        stk.push(number);
      }
      
      else if(ch==2){
        s.erase(s.find(stk.top()));
        stk.pop();
      }
      else {
        cout<<*(s.begin())<<endl;
      }
    }
  return 0;
}
