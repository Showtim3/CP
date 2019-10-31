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
    cin>>t;

    while(t--){
      int n,i;
      cin>>n;
      vector<int> v;
      v.reserve(n);
      for(i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
      }

      while(v.size()>=3){
        // sort(v.begin(),v.begin()+3);
        int a = v[0];
        int b = v[1];
        int c = v[2];


        if ((a < b && b < c) || (c < b && b < a))
        {
        v.erase(v.begin()+1);
        }

        else if ((b < a && a < c) || (c < a && a < b))
        {
        v.erase(v.begin());
        }

        else
        {
        v.erase(v.begin()+2);
        }
        }

      cout<<v[0]<<" "<<v[1]<<endl;

    }
  return 0;
}
