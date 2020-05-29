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

  void printReverse(Node *temp){
    if(temp==NULL) return;
    printReverse(temp->next);
    cout<<temp->data<<" ";
  }
  void printReverse(){
      cout<<endl;
      printReverse(head);
  }
};

int main(){
// 10 20 30 40
// 10 20 100 30 40 60 50 60 70 80
  LinkedList list;
  list.addNode(11);
  list.addNode(20);
  list.addNode(100);
  list.addNode(40);
  list.addNode(70);
  list.addNode(35);
  list.addNode(40);
  list.addNode(65);
  list.addNode(50);
  list.addNode(60);
  list.addNode(70);
  list.addNode(80);
  list.addNode(90);
  list.addNode(95);
  list.printList();
  list.printReverse();


  return 0;
}
