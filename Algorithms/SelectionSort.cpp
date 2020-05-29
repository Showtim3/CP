#include<iostream>
#include<vector>
using namespace std;

void printArray(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[] = {10,34,1,4,18,55,12,19,22};
	int n=sizeof(a)/sizeof(a[0]),i,j;
	int minimum=a[0];
	int minIndex = -1;
	for(i=0;i<n-1;i++){
		minIndex = i;
    minimum = a[i];
		for(j=i+1;j<n;j++){
			if(a[j]<minimum){
				minimum = a[j];
				minIndex= j;
			}
		}
		swap(a[i],a[minIndex]);
    printArray(a,n);
	}
	printArray(a,n);
	return 0;
}
