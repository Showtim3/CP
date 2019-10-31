#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    int t;
    set<int> s;
    cin>>t;
    int choice;
    int ele;
    while(t--){
      cin>>choice;
      if(choice == 1){
        cin>>ele;
        s.insert(ele);
      } if(choice == 2){
        cin>>ele;
        s.erase(ele);
      } if(choice == 3){
        cout<< *(s.begin())<<endl;
      }
    }
  return 0;
}
