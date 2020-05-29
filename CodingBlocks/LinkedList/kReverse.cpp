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
  void kReverseByValue(int k){
    Node *temp = head;
    int i=0,j=0;
    int size=getSize();
    int itr = size/k;
    int round=1;
    while(itr--){
      _kReverseByValue(temp,&temp,i,j,k);
      i=0;j=0;
      temp=head;
      int p=0;
      while(temp!=NULL && p<round*k){
        temp=temp->next;
        p++;
      }
      // cout<<"Temp is"<<temp->data<<endl;
      round++;
    }

  }
  void _kReverseByValue(Node *temp, Node **begin, int &i, int &j,int k){
    // cout<<i<<" "<<j<<endl;
    j++;
    if(j%k==0){
      return;
    }
    temp=temp->next;
    _kReverseByValue(temp,begin,i,j,k);
    j--;
    i++;
    if(i>j){
      return;
    }
    // cout<<"swapping"<<temp->data<<" "<<(*begin)->data<<endl;
    swap(temp->data, (*begin)->data);
    if((*begin)->next!=NULL){
        *begin=(*begin)->next;
    }

  }

};




int main(){
  int n,k;
  LinkedList list;
  cin>>n>>k;
  int i,ele;
  for(i=0;i<n;i++){
    cin>>ele;
    list.addNode(ele);
  }

  // list.addNode(10);
  // list.addNode(20);
  // list.addNode(30);
  // list.addNode(40);
  // list.addNode(50);
  // list.addNode(60);
  // list.addNode(70);
  // list.addNode(80);
  // list.addNode(90);
  // list.addNode(100);
  // list.addNode(110);
  // list.addNode(120);

  // list.printList();
  // cout<<list.getSize()<<endl;
  list.kReverseByValue(k);
  list.printList();


  return 0;
}
