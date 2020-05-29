#include <iostream>


using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      int a[1000010];
      int i;
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      bool increasing=true;
      bool decreasing=false;
      int count=0;
      int maxCount=0;
      int lastIndex=0;
      i=0;
      while(i<n-1){
        if(increasing){
          if(a[i+1]>=a[i]){
            count++;
          }
          else{
            lastIndex= i+1;
            increasing=false;
            decreasing=true;
            count++;
          }
        } else {
          if(a[i+1]<=a[i]){
            lastIndex= i;
            count++;
          }
          else{
            increasing=true;
            decreasing=false;
            count=0;
            i=lastIndex-1;
          }
        }
        i++;
        maxCount = max(count, maxCount);
      }
      cout<<maxCount+1<<endl;
    }
  return 0;
}
