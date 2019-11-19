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

    int t;
    cin>>t;

    int r,c,k;
    int i,j;
    while(t--){
        cin>>r>>c>>k;
        vector<string> v(r);
        string s;
        for(i=0;i<r;i++){
          cin>>s;
          v.push_back(s);
        }
        int countR = 0;
        vector<int> ans(k,count)
        for(i=0;i<v.size();i++){
          for(j=0;j<v[i].size();j++){
            cout<<v[i][j];
             if(v[i][j] == 'R'){
               countR++;
           }
         }
         cout<<endl;
        }
        int each = countR / k;
        vector<int> ans(k,each);
        i=0;
        int rem = countR % k;
        if(rem != 0){
          while(rem!=0){
            ans[i]++;
            i++;
            rem--;
          }
        }
      }


  return 0;
}
