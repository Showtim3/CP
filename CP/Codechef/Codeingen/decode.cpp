#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr) {
  // Get the first occurrence
  size_t pos = data.find(toSearch);
  // Repeat till end is reached
  while( pos != std::string::npos)
  {
  // Replace this occurrence of Sub String
  data.replace(pos, toSearch.size(), replaceStr);
  // Get the next occurrence from the current position
  pos =data.find(toSearch, pos + replaceStr.size());
  }
}

int main(){
    li t;
    cin>>t;
    string s;
    li k;
    li i;
    while(t--){
      cin>>k;
      // cin.ignore();
      getline(cin,s);
      getline(cin,s);

      k = k % 26;
      s.erase(remove(s.begin(), s.end(), ' '), s.end());
      int len = s.length();
      if(k!=0){
      for(i=0;i<len;i++){
        int ch = int(s[i] - 65);
        if(ch - k >= 0){
          s[i]= char(ch + 65 - k);
        } else{
          int ind = ch - k;
          s[i] = char(65 + 26 + ind);
        }
      }
    }


    for(i=0;i<s.size();i++)
    		{
    			if(i+1<s.size() && s[i]=='Q' && s[i+1]=='Q')
    			{
    				i++;
    				cout<<" ";
    			}
    			else
    			  cout<<s[i];
    		}

        cout<<"\n";
  }
  return 0;
}
