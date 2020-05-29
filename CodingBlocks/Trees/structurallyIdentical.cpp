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
    node *temp = new node(d);
    cin.ignore();
    string present;
    cin>>present;
    if(present=="true"){
      temp->left=takeInputInPreOrder();
    }
    cin>>present;
    if(present=="true"){
      temp->right=takeInputInPreOrder();
    }
    return temp;
}
};

bool checkIfEqual(node *root, node *root1){
  if(root == NULL && root1 == NULL){
    return true;
  }
  if(root==NULL || root1 == NULL){
    return false;
  }
  return ((root->data==root1->data) &&
   checkIfEqual(root->left, root1->left) &&
   checkIfEqual(root->right, root1->right));
}


int main(){
  BinaryTree tree, tree2;
  tree.root = tree.takeInputInPreOrder();
  tree2.root = tree2.takeInputInPreOrder();
  if(checkIfEqual(tree.root, tree2.root)){
    cout<<"true"<<endl;
  } else cout<<"false"<<endl;

  return 0;
}
