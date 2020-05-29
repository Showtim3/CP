#include <iostream>
#include <vector>
using namespace std;

void permutations(string str, vector<string> &output)
{
    if(str.length()==0)
    {
        output.push_back("");
        return;
    }

    vector<string> op1;
    permutations(str.substr(1), op1);

    for(int i=0;i<op1.size();i++)
    {
        for(int j=0;j<str.length();j++)
        {
            output.push_back(op1[i].substr(0,j) + str[0] + op1[i].substr(j));
        }
    }
    return;
}
/*
    bc : abc, bac , bca
    cb :
*/
int main() {
	// your code goes here
	string str;
	cin>>str;
	vector<string> output;
	permutations(str, output);
	for(int i=0;i<output.size();i++)
	{
	    cout<<output[i]<<endl;
	}
	return 0;
}
