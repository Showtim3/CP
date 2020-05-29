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

  void reverseList(){
    Node *curr=head;
    Node *prev=NULL;
    Node *nxt=NULL;

    while(curr!=NULL){
      cout<<curr->data<<endl;
      nxt=curr->next;
      curr->next=prev;
      prev=curr;
      curr=nxt;
    }
    head=prev;
    return;
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
  list.addNode(70);
  list.addNode(80);
  list.printList();
  list.reverseList();
  cout<<"Reversing"<<endl;
  list.printList();

  return 0;
}
