// CPP program to generate power set in
// lexicographic order.
#include<iostream>
#include<cmath>
using namespace std;

void printSubSeq(string input, string output){
  if(input.length()==0){
    cout<<output<<" ";
    return;
  }

  printSubSeq(input.substr(1), output);
  printSubSeq(input.substr(1), output + input[0]);
}

// Driver code
int main()
{
	string str;
  cin>>str;

	printSubSeq(str, "");
  cout<<endl;
  cout<<pow(2, str.length());
	return 0;
}
