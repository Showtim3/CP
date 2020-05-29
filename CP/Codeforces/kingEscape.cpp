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

using namespace std;

int main(){

    int n;
    cin>>n;
    int queenX,queenY,initialX,initialY,finalX,finalY;
    cin>>queenX>>queenY;
    cin>>initialX>>initialY;
    cin>>finalX>>finalY;
    int quad1=-1,quad2=-1;
    if(initialX<queenX && initialY<queenY){
      quad1= 1;
    } else if(initialX>queenX && initialY<queenY){
      quad1= 4;
    } else if(initialX<queenX && initialY>queenY){
      quad1= 2;
    } else if(initialX>queenX && initialY>queenY){
      quad1= 3;
    }

    if(finalX<queenX && finalY<queenY){
      quad2= 1;
    } else if(finalX>queenX && finalY<queenY){
      quad2= 4;
    } else if(finalX<queenX && finalY>queenY){
      quad2= 2;
    } else if(finalX>queenX && finalY>queenY){
      quad2= 3;
    }
    if(quad1==quad2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  return 0;
}
