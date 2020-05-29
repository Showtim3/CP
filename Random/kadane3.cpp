#include<iostream>
#include<climits>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int a[100010];
		long int i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}

    for(i=0;i<n;i++){
      a[n+i]=a[i];
    }
    long int maxSum = a[0];
   	long int currMax = a[0];
    bool firstItr = true;
    n=n*2;
    for(i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
   		for (int i = 1; i < n; i++){
  			     currMax+=a[i];
  			     currMax=max(currMax, a[i]);
  		       if(maxSum<currMax){
		            maxSum=currMax;
           }
   		}

		cout<<maxSum<<endl;
	}

	return 0;
}
