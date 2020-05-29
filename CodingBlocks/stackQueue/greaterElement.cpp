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

    int n;
    cin>>n;

    vector<int> a;
    a.reserve(n);
    int i,ele;
    for(i=0;i<n;i++){
      cin>>ele;
      a.push_back(ele);
    }
    sort(a.begin(),a.end());
    bool found;
    vector<int> answer;
    int j;
    answer.reserve(n);
    for(i=0;i<n;i++){
      j=(i+1)%n;
      found=false;
      while(j!=i){
        if(a[j]>a[i]){
          found=true;
          answer.push_back(a[j]);
          break;
        }
        j=(j+1)%n;
      }
      if(!found){
        answer.push_back(-1);
      }
    }
    for(i=0;i<n;i++){
      cout<<answer[i]<<" ";
    }
    cout<<endl;
  return 0;
}
