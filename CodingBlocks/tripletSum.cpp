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

struct values {
  int a;
  int b;
  int c;
};

bool comparator(values v1, values v2)
{
    if(v1.a<v2.a){
      return true;
    }
    if(v1.a>v2.a){
      return false;
    }
    if(v1.b<v2.b){
      return true;
    }
    if(v1.b>v2.b){
      return false;
    }
    if(v1.c<v2.c){
      return true;
    }
    if(v1.c>v2.c){
      return false;
    }
}

int returnSecondMin(int a,int b, int c){
  int maximum = max(a,max(b,c));
  int minimum = min(a,min(b,c));
  int sum = a + b + c;
  int mid = sum-maximum-minimum;
  return mid;
}

int main(){

    int n,i;
    cin>>n;
    vector<int> a;
    int ele;
    for(i=0;i<n;i++){
      cin>>ele;
      a.push_back(ele);
    }

    int target;
    cin>>target;
    multimap<int, bool> m;
    for(i=0;i<n;i++){
      m.insert(make_pair(a[i],1));
    }

    int sum,j;
    vector<values> answer;
    answer.reserve(n);
    int k=0;
    for(i=0;i<n;i++){
      m.erase(a[i]);
      for(j=i+1;j<n;j++){
        m.erase(a[j]);
        sum = a[i]+a[j];
        if(m.count(target-sum)) {
          values temp;
          temp.a = min(a[i],min(a[j], target-sum));
          temp.b = returnSecondMin(a[i],a[j],target-sum);
          temp.c = max(a[i],max(a[j], target-sum));
          answer.push_back(temp);
        }
        m.insert(make_pair(a[j],true));
      }
      m.insert(make_pair(a[i],1));
    }
    sort(answer.begin(),answer.end(),comparator);
    i=0;
    while(i!=answer.size()-1){
      if(answer[i].a==answer[i+1].a && answer[i].b==answer[i+1].b && answer[i].c==answer[i+1].c){
        answer.erase(answer.begin()+i+1);
      } else {
        i++;
      }
    }

    for(auto y: answer){

      cout<<y.a<<", "<<y.b<<" and "<<y.c<<endl;
    }

  return 0;
}
