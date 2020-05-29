#include<iostream>
using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node(int d){
        data=d;
        next=NULL;
    }
friend class LinkedList;
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head=NULL;
    }
    // ~LinkedList(){
    //   cout<<"Releasing memory"<<endl;
    //   Node *temp = head;
    //   Node *next=temp;
    //   while(next!=NULL){
    //     next=temp->next;
    //     delete temp;
    //   }
    // }
    void InsertAtBegin(int d){
        Node* nn=new Node(d);
        nn->next=head;
        head=nn;
    }

    void Print(){
        Node*temp=head;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void InsertAtEnd(int d){
      if(head==NULL){
        InsertAtBegin(d);
        return;
      }
      Node *nn = new Node(d);
      Node *temp = head;
      while(temp->next!=NULL)
        temp=temp->next;
      temp->next = nn;
    }


    void DeleteFirstNode() {
      if(head==NULL){
        cout<<"List is empty. Deletion not possible"<<endl;
      }
      cout<<"Deleting First node"<<endl;
      Node *temp = head;
      head=head->next;
      delete temp;
    }
    void DeleteLastNode() {
      if(head==NULL){
        cout<<"List is empty. Deletion not possible"<<endl;
      }
      cout<<"Deleting Last node"<<endl;
      Node *temp=head;
      //Temp will give us the second last node
      while((temp->next)->next!=NULL) {
        temp=temp->next;
      }
      Node *last=temp->next;
      delete last;
      temp->next = NULL;
    }
    void DeleteKthNode(int k) {
      if(head==NULL){
        cout<<"List is empty. Deletion not possible"<<endl;
      }
      cout<<"Deleting Node at "<<k<<" Position"<<endl;
      int cnt = 1;
      Node *temp=head;
      while(cnt<k-1&&temp!=NULL){
        temp=temp->next;
        cnt++;
      }
      if(temp==NULL){
        cout<<"Deleting Node at "<<k<<" Position is not possible."<<endl;
        return;
      }
      Node *nextNode = temp->next;
      temp->next=nextNode -> next;
      delete nextNode;
    }

};

int main(){
    LinkedList LL;
    LL.InsertAtBegin(1);
    LL.InsertAtBegin(2);
    LL.InsertAtBegin(3);
    LL.InsertAtBegin(4);
    LL.InsertAtBegin(5);
    LL.InsertAtBegin(6);
    LL.InsertAtEnd(10);
    LL.InsertAtEnd(12);
    LL.Print();
    LL.DeleteFirstNode();
    LL.Print();
    LL.DeleteLastNode();
    LL.Print();
    LL.DeleteKthNode(3);
    LL.Print();
    LL.DeleteKthNode(2);
    LL.Print();
}
