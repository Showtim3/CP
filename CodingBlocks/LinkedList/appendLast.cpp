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
  void addToBeginning(int data){
    if(head==NULL){
      Node *temp = new Node();
      temp->data=data;
      temp->next=NULL;
      head=temp;
      return;
    }

    Node *temp = new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
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
  int pop(){
     Node *temp=head;
     while(temp->next->next!=NULL){
       temp=temp->next;
     }
     int val = temp->next->data;
     delete temp->next;
     temp->next=NULL;
     // cout<<temp<<endl;
     // cout<<"Deleting"<<val<<endl;
     return val;
  }
  void printList(){
    Node *temp=head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
  void appendToFront(int k){
    // cout<<"Kth elemenet"<<endl;
    if(k==1){
      int data = pop();
      addToBeginning(data);
      return;
    }
    Node *temp1=head;
    Node *temp2=head;
    int i=1,j=1;

    while(i<=k+1){
      // cout<<i<<" "<<temp1->data<<" "<<temp2->data<<endl;
      if(i%k==0&&temp2->next->next!=NULL){
        // cout<<"First if "<<i<<endl;
        temp1=temp1->next;
        temp2=temp1;
        i=1;
      }
      if(i%k==0&&temp2->next->next==NULL){
        // cout<<"Second if break"<<endl;
        break;
      }
      // cout<<"Contine"<<endl;
      temp2=temp2->next;
      i++;
    }

    Node *breakingNode;
    // cout<<temp1->data<<endl;
    breakingNode=temp1->next;
    temp1->next=NULL;
    Node *temp =breakingNode;
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next=head;
    head=breakingNode;
  }

};

int main(){
// 10 20 30 40
// 10 20 100 30 40 60 50 60 70 80
  LinkedList list;
  int n;
  cin>>n;
  int ele,i;
  for(i=0;i<n;i++){
    cin>>ele;
    list.addNode(ele);
  }


    // list.addNode(11);
    // list.addNode(20);
    // list.addNode(100);
    // list.addNode(40);
    // list.addNode(70);
    // list.addNode(35);
    // list.addNode(40);
    // list.addNode(65);
    // list.addNode(50);
    // list.addNode(60);
    // list.addNode(70);
    // list.addNode(80);
    // list.addNode(90);
    // list.addNode(95);
  int k;
  // k=2;
  cin>>k;
  if(k>n){
    k=k%n;
  }
  // list.printList();
  if(k<n){
    list.appendToFront(k);
  }
  list.printList();

  return 0;
}
