#include <iostream>
#include <set>
#include <map>
#include <vector>

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

  bool isElementPresent(node *root, int d){
    if(root==NULL){
      return false;
    }
    if(root->data==d){
      return true;
    }
    return (isElementPresent(root->left,d) || isElementPresent(root->right,d));
  }
  node* findLCA(node *root, int a, int b){
    if(root==NULL){
      return root;
    }
    bool lefta = isElementPresent(root->left,a);
    bool leftb = isElementPresent(root->left, b);
    bool righta = isElementPresent(root->right,a);
    bool rightb = isElementPresent(root->right,b);
    if(lefta && leftb){
      return findLCA(root->left,a,b);
    } else if(righta && rightb) {
      return findLCA(root->right,a,b);
    } else if((lefta && rightb) || (leftb && righta)){
      return root;
    }
    }
};

int main(){
  BinaryTree tree;
  //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

  tree.root = tree.takeInputInPreOrder();
  int a=8;int b=8;
  cout<<"LCA of "<<a<<" and "<<b<<" is: ";
  cout<<endl;
  cout<<(tree.findLCA(tree.root,a,b)->data)<<endl;

  return 0;
}
