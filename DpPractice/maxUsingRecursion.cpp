#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

int findMax(int arr[], int length){
  cout<<"Length inside function"<<length<<endl;
  if(length == 1 ){
    return arr[0];
  }
  else return max(arr[length-1],findMax(arr,--length));
}

int main(){

    int arr[] = {1,2,4,12,7,18,3,6,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<length<<endl;
    cout<<findMax(arr,length)<<endl;
  return 0;
}
