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

    while(t--){
      int n;
      cin>>n;
      int i,j;
      map<pair<char, int>, int> m;
      vector<pair<char, int> > a;
      char ch; int time;
      int mat[20][20];

      for(i=0;i<n;i++){
        cin>>ch>>time;
        a.push_back(make_pair(ch,time));
      }

      for(i=0;i<4;i++){
        for(j=0;j<4;j++){
          mat[i][j]=0;
        }
      }

      for(i=0;i<n;i++){
        mat[a[i].first-'A'][a[i].second/3 -1]++;
      }
      bool visited[30][30] = {0};

      for(i=0;i<4;i++){
        for(j=0;j<4;j++){
          visited[i][j]=0;
        }
      }

      for(i=0;i<4;i++){
        for(j=0;j<4;j++){
          cout<<mat[i][j]<<" ";
        } cout<<endl;
      }

    }
  return 0;
}
