#include <iostream> //2 3 4
using namespace std;

int rainwater( int a[],int N){
  long int sum=0;
  int leftmax[100]={0};
  int rightmax[100]={0};
  leftmax[0]= a[0];
  rightmax[N-1]=a[N-1];

  for (int i=1;i<N;i++){
    leftmax[i]=max(a[i],leftmax[i-1]);
  }
  for(int j=N-2;j>=0;j--){
    rightmax[j]=max(rightmax[j+1],a[j]);
  }
  // int i;
  // for(i=0;i<N;i++){
  //   cout<<leftmax[i]<<" ";
  // } cout<<endl;
  //
  // for(i=0;i<N;i++){
  //   cout<<rightmax[i]<<" ";
  // } cout<<endl;
  long int currentSum=0;
  for(int i=0;i<N;i++){
    currentSum=min(rightmax[i], leftmax[i])-a[i];
    if(currentSum>0){
      sum+=currentSum;
    }
  }
  cout<<sum;
}

int main(){
  long int N;
  cin>>N;
  int a[100]={0};
  for(int i=0;i<N;i++){
    cin>>a[i];
  }
  rainwater(a,N);
  return 0;
}
