#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

lli p1=0,p2=0;
bool chefsTurn = true;
using namespace std;


bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[v1.size()/2] > v2[v2.size()/2];
}


// 2 4 6 8 11 12
// 2 4 7 6 8 => mid element n/2 2
void consumeEvenArray(vector<int> &v, lli n){
  lli i;
  for(i=0;i<n/2;i++){
      p1+=v[i];
    }
}

void consumeOddArray(vector<vector<int> >&v, int row){
lli i,j;
  for(i=0;i<row;i++){
    for(j=0;j<v[i].size()/2;j++){
    p1+=v[i][j];
  }
}

    if(chefsTurn){
      p1+= v[row][v[i].size()/2];
      chefsTurn = false;
    } else {
      chefsTurn = true;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    int t;
    cin>>t;
    lli n,ele,size,i;
    vector<int> v;
    vector<vector<int> > oddCoins;
    multiset<int> s;
    int countOddRows = 0;
    while(t--) {
      chefsTurn = true;
      p1=0;
      cin>>n;
      while(n--) {
        cin>>size;
        if(size%2!=0){
          v.reserve(size);
          countOddRows++;
          vector<int> oddRow;
          for(i=0;i<size;i++){
            cin>>ele;
            oddRow.push_back(ele);
          }
          oddCoins.push_back(oddRow);
        } else {
          v.reserve(size);
          for(i=0;i<size;i++) {
            cin>>ele;
            v.push_back(ele);
          }
          consumeEvenArray(v,size);
        }
        sort(oddCoins.begin(),oddCoins.end(),sortcol);
        consumeOddArray(oddCoins, countOddRows);
        cout<<p1<<endl;
        oddCoins.clear();
        v.clear();
      }
    }
  return 0;
}
