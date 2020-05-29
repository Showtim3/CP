// 8. Arrange elements in a Linked List such that all even numbers are placed after odd numbers.
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

  void arrangeOddEven(){
      Node *curr = head;
      Node *nxt  = head->next;
      bool swapped=false;
      while(true){
        if(nxt==NULL && !swapped){
          break;
        }
        if(nxt==NULL && swapped){
          curr = head;
          nxt  = head->next;
          swapped=false;
        }
        if((curr->data)%2==0 && nxt->data%2!=0){
          swap(curr->data, nxt->data);
          swapped=true;
        }
        curr=nxt;
        nxt=nxt->next;
      }
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
  list.arrangeOddEven();
  list.printList();
  return 0;
}
