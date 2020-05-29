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

  int getSize(){
    Node *temp=head;
    int size = 0;
    if(head==NULL){
      return 0;
    }
    while(temp!=NULL){
      size++;
      temp=temp->next;
    }
    return size;
  }
  Node* kReverse(Node *h, int k){
    if(h==NULL){
      return NULL;
    }
    Node* curr = h;
    Node *prev = NULL;
    Node *nxt = NULL;
    int count=0;
    while(curr!=NULL && count<k){
      nxt = curr->next;
      curr->next=prev;
      prev=curr;
      curr=nxt;
      count++;
    }

    if (curr != NULL)
      h->next = kReverse(curr, k);

    return prev;
  }
};




int main(){
  // int n,k;
  LinkedList list;
  // cin>>n>>k;
  // int i,ele;
  // for(i=0;i<n;i++){
  //   cin>>ele;
  //   list.addNode(ele);
  // }

  list.addNode(10);
  list.addNode(20);
  list.addNode(30);
  list.addNode(40);
  list.addNode(50);
  list.addNode(60);
  // list.addNode(70);
  // list.addNode(80);
  // list.addNode(90);
  // list.addNode(100);
  // list.addNode(110);
  // list.addNode(120);

  list.printList();
  // cout<<list.getSize()<<endl;
  int k=3;
  list.head = list.kReverse(list.head, k);
  list.printList();



  return 0;
}
