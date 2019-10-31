// 2,3,4,5,6 is a valid sequence
// 2,3,5,6 is not since 4 is missing

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long
#define lli long long int

using namespace std;

bool checkSequence(int ar[], int i, int length){

    if(i == length -1 ){
      return true;
    }

    if(ar[i+1]-ar[i]!=1){
      cout<<i<<" "<<ar[i+1]<<" "<<ar[i]<<endl;
      return false;
    }

    else return checkSequence(ar,++i,length);

}

int main(){

    int ar[] = {2,3,4,5,6}; //true
    int ar2[] = {11,12,13,14,15,19}; //false
    int ar3[] = {8,12,13,14,15,19}; //false
    int ar4[] = {9,10,11,12}; //true

    checkSequence(ar,0,5) ? cout<<"True"<<endl : cout<<"False"<<endl;
    checkSequence(ar2,0,6) ? cout<<"True"<<endl : cout<<"False"<<endl;
    checkSequence(ar3,0,6) ? cout<<"True"<<endl : cout<<"False"<<endl;
    checkSequence(ar4,0,4) ? cout<<"True"<<endl : cout<<"False"<<endl;

    return 0;
}
