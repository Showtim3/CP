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
  void removeDuplicates(){
    cout<<"Removing Duplicates"<<endl;
    if(head==NULL || head->next==NULL){
      return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
      if(temp->data==(temp->next)->data){
        Node *del = temp->next;
        temp->next=temp->next->next;
        delete del;
      } else {
          temp=temp->next;
      }

    }
  }
  void printList(){
    cout<<endl;
    Node *temp=head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }

};

int main(){
  LinkedList list;
  list.addNode(10);
  list.addNode(20);
  list.addNode(20);
  list.addNode(20);
  list.addNode(20);
  list.addNode(30);
  list.addNode(30);
  list.addNode(40);
  list.addNode(40);
  list.printList();
  list.removeDuplicates();
  list.printList();
  return 0;
}
