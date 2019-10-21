#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdint>
#include <cmath>

#define ll long long
#define lli long long int
#define ull unsigned long long

using namespace std;

// method to get maximum xor value in range [L, R]
lli maximumXOR(lli l, lli r) {
    lli q = l ^ r, a = 1;
    while(q){
        q /= 2;
        a <<= 1;
    }
    return --a;
}

//  Driver code to test above methods
int main()
{
    int t;
    cin>>t;

    while(t--){
      lli l,r;
      cin>>l>>r;
      cout << maximumXOR(l, r) << endl;
    }



    return 0;
}
