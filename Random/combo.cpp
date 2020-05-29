#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
	    int n, m;
	    cin>>n>>m;
	    char*arr = new char[n];
	    for(int i=0;i<n;i++)
	    {
	        char data;
	        cin>>data;
	        arr[i] =  data;
	    }
	    vector<int> v ;
	    for(int i=0;i<m;i++)
	    {
	        int data;
	        cin>>data;
	        v.push_back(data);
	    }
	    sort(v.begin(), v.end());
	    v.push_back(n);
	    int index=0;
	    int* freq = new int[26];
	    for(int i=0;i<26;i++)
	    {
	        freq[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        while(i+1 > v[index]) {
	            index++;
	        }
	        freq[arr[i]-97] += v.size()-index;
	    }
	    for(int i=0;i<26;i++)
	    {
	        cout<<freq[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
