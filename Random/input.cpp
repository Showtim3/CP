#include <iostream>
using namespace std;

void readline(char a[],int S,int del='\n'){
  int i=0;
  char ch;
  cin.get(ch);
  while(ch!=del){
    a[i]=ch;
    i++;
    if(i==S){
      break;
    }
    cin.get(ch);
  }
  a[i]='\0';
  return;
}

int main(){
  char a[100];
  readline(a,100);
  cout<<a<<endl;
}
