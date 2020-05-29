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
};

Node* merge(Node *head1, Node*head2){
    Node *temp1=head1;
    Node *temp2=head2;
    Node *head =new Node();

    if(head1==NULL && head2==NULL){
      return NULL;
    }
    if(head1==NULL){
      return head2;
    }
    if(head2==NULL){
      return head1;
    }
    if(temp1->data >= temp2->data){
      head->data = temp2->data;
      temp2=temp2->next;
    } else if(temp1->data < temp2->data){
      head->data = temp1->data;
      temp1=temp1->next;
    }

    head->next = NULL;
    Node *temp=head;

    while(temp1!=NULL && temp2!=NULL){
      Node *h = new Node();
      if(temp1->data >= temp2->data){
        h->data = temp2->data;
        h->next=NULL;
        temp2=temp2->next;
      } else if(temp1->data < temp2->data){
        h->data = temp1->data;
        h->next=NULL;
        temp1=temp1->next;
      }
      temp->next=h;
      temp=h;
    }
    while(temp1!=NULL){
      Node *h = new Node();
      h->data=temp1->data;
      temp->next=h;
      temp=h;
      temp1=temp1->next;
    }
    while(temp2!=NULL){
      Node *h = new Node();
      h->data=temp2->data;
      temp->next=h;
      temp=h;
      temp2=temp2->next;
    }
    return head;
}

int main(){

  int t;
  cin>>t;
  while(t--){
    LinkedList list1;
    LinkedList list2;
    int n,m;
    int ele;
    int i;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>ele;
      list1.addNode(ele);
    }

    cin>>m;
    for(i=0;i<m;i++){
      cin>>ele;
      list2.addNode(ele);
    }
    Node *final = merge(list1.head, list2.head);
    Node *temp=final;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    list1.head=NULL;
    list2.head=NULL;
    cout<<endl;
  }
  return 0;
}
