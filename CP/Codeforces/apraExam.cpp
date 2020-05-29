#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define li long int
#define ll long long
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){

    lli n;
    cin>>n;
    if(n==0) cout<<1<<endl;
    else if(n%4==0) cout<<6<<endl;
    else if((n-1)%4==0) cout<<8<<endl;
    else if((n-2)%4==0) cout<<4<<endl;
    else if((n-3)%4==0) cout<<2<<endl;

  return 0;
}
