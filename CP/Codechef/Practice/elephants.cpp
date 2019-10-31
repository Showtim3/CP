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

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        li a[1010];
        li sum = 0;
        bool ans = true;
        int i;
        for(i=0;i<n;i++){
          cin>>a[i];
        }
        for(i=0;i<n;i++){
          sum+=a[i];
          if(sum > k){
            ans = false;
            break;
          }
        }

        ans ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
  return 0;
}
