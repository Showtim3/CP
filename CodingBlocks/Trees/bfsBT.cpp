#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define li long int
#define ll long long
#define lli long long int

using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;
  node(int d){
    this->data = d;
    this->left=NULL;
    this->right=NULL;
  }
};

class BinaryTree {

public:
  node* root;
  BinaryTree(){
    root = NULL;
  }

  node* takeInputInPreOrder(){
    int d;
    cin>>d;
    if(d == -1){
      return NULL;
    }

    node *temp = new node(d);
    temp->left=takeInputInPreOrder();
    temp->right=takeInputInPreOrder();
    return temp;
  }

void printBFS(){
  queue<node*> q;
  q.push(root);
  while(!q.empty()){
    node *temp = q.front();
    if(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        q.push(temp->left);
        q.push(temp->right);        
    }
    q.pop();
  }
  cout<<endl<<"BFS DONE"<<endl;
  }
};

int main(){
  BinaryTree tree;
  //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
  tree.root = tree.takeInputInPreOrder();
  tree.printBFS();
  return 0;
}
