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
  int findMidPoint(){
    cout<<"Finding Endpoint"<<endl;
    if(head==NULL){
      return -1;
    }
    Node *slow=head;
    Node *fast=head;
    int i=1;
    while(fast->next!=NULL && fast->next->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
      i++;
    }
    cout<<"Position: "<<i<<endl;
    return slow->data;
  }
};
int main(){
// 10 20 30 40
// 10 20 30 40 50 60 70 80
  LinkedList list;
  list.addNode(10);
  list.addNode(20);
  list.addNode(30);
  list.addNode(40);
  list.addNode(50);
  list.addNode(60);
  // list.addNode(70);
  list.printList();
  cout<<list.findMidPoint()<<endl;

  return 0;
}
