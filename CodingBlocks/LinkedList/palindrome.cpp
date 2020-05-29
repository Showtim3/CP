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

struct Node{
  int data;
  Node* next;
};

class LinkedList{
public:
  Node *head;
  LinkedList(){
    head=NULL;
  }
  void addNode(int data){
    if(head==NULL){
      head = new Node();
      head->data=data;
      head->next=NULL;
    }
     else {
       Node *temp=head;
       while (temp->next!=NULL) {
         temp=temp->next;
       }
       Node *a=new Node();
       a->data = data;
       temp->next=a;
     }
   }
  void printList(){
    Node *temp=head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
  // 10 20 30 40 50 NULL
  bool checkPalindrome(Node *temp, Node **begin){
    if(temp==NULL){
      return true;
    }
    cout<<temp->data<<endl;


    bool palindrome = checkPalindrome(temp->next, begin);
    if(palindrome) {
      cout<<"Checking "<<temp->data<<" and "<< (*begin)->data<<endl;
      if (temp->data == (*begin)->data){
        if((*begin)->next!=NULL){
        (*begin)=(*begin)->next;
        }
        // cout<<"Now begin is"<<(*begin)->data<<endl;
        return true;
      }
    } else return false;
  }

  bool checkPalindrome(){
    Node *begin = head;
    return checkPalindrome(begin, &begin);
  }
};
int main(){

  LinkedList list;
  int n;
  cin>>n;
  int ele;
  for(int i=0;i<n;i++){
	  cin>>ele;
	  list.addNode(ele);
  }

	if(list.checkPalindrome()){
		cout<<"True"<<endl;
	} else cout<<"False"<<endl;


  return 0;
}
