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

    lli n = 100;
    int sum = (n/2*(n+1)); // 50 * 101 = 5050 67
    lli sumSquare = (n*(n+1)*((2*n) + 1))/6; // 50 101 67
    lli sq = sum * sum;
    cout<<sq<<endl;
    cout<<sumSquare<<endl;
    cout<<sq-sumSquare<<endl;
    lli sq2 = pow(sum,2);
    cout<<sq2-sumSquare<<endl;

  return 0;
}
