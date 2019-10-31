#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int main(){

    lli arr[5];
    lli a,b,c;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);

    b = (arr[0] + arr[2] - arr[1])/2;
    a = arr[0] - b;
    c = arr[3] - a - b;

    cout<<a<<" "<<b<<" "<<c;



  return 0;
}
