#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

// string addTime(string s1, string s2){
//   second=second1+second2;
// 	minute=minute1+minute2+(second/60);
// 	hour=hour1+hour2+(minute/60);
// 	minute=minute%60;
// 	second=second%60;
// }
vector<string> removeDupWord(string str)
{
    // word variable to store word
    string word;
    vector<string> s;


    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word)
        s.push_back(word);


    return s;
}


int main(){

    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;
      string s;
      vector<vector<string> > data;
      for(int i=0;i<n;i++){
        cin>>s;
        data.push_back(removeDupWord(s));
      }

      for (auto x: data){
        for(auto word: x){
          cout<<word<<endl;
        }
      }
    }
    cout<<"Done"<<endl;
  return 0;
}
