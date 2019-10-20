  #include <iostream>
  #include <set>
  #include <map>
  #include <vector>
  #include <algorithm>

  #define ll long long
  #define lli long long int

  using namespace std;


  ll gcd(ll a , ll b)
  {
     if(b==0) return a;
     a%=b;
     return gcd(b,a);
  }

  int main(){

      int t;
      cin>>t;

      while(t--){
        ll n,k,r,c,i;
        cin>>n>>k;

        set<ll> rowSet;
        set<ll> colSet;

        for(i=0;i<k;i++){
          cin>>r>>c;
          rowSet.insert(r);
          colSet.insert(c);
        }
        ll cellsleft = n*n - (rowSet.size() * n);
        cellsleft = cellsleft - (colSet.size()*n) + (rowSet.size()*colSet.size());

        if(cellsleft <= 0 ){
          cout<<"Impossible"<<endl;
        } else{
              ll g = gcd(n*n, cellsleft);
              cout<< cellsleft/g << " "<<n*n/g << endl;


          }
      }
    return 0;
  }
