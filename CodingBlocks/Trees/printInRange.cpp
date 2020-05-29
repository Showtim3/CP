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

class BST {

public:
  node* root;
  BST(){
    root = NULL;
  }

  void insert(node *temp, int d){
    if(root==NULL){
      root = new node(d);
      return;
    }

    if(d < temp->data ) {
      if(temp->left==NULL){
        temp->left = new node(d);
      } else {
        insert(temp->left,d);
      }
    }
    if(d > temp->data) {
      if(temp->right==NULL){
        temp->right = new node(d);
      } else {
          insert(temp->right, d);
      }
    }
  }


  void printPreorder(node *temp){
    if(temp==NULL) return;

    cout<<temp->data<<" ";
    printPreorder(temp->left);
    printPreorder(temp->right);
  }


  void printInRange(node *temp, int i,int j, set<int> &s){
    if(temp==NULL){
      return;
    }
    if(temp->data>=i && temp->data<=j){
      s.insert(temp->data);
      printInRange(temp->left, i, j,s);
      printInRange(temp->right, i, j,s);
    }

    if(i>=temp->data){
      printInRange(temp->right, i, j,s);
    }
    else if(i<temp->data){
      printInRange(temp->left, i, j,s);
    }

  }
};


int main(){

  int n,t;
  cin>>t;
  while(t--){
    BST tree;
    cin>>n;
    int i,ele,j;

    for(i=1;i<=n;i++){
      cin>>ele;
      tree.insert(tree.root,ele);
    }
    cin>>i>>j;
    set<int> s;
    cout<<"# Preorder : ";
    tree.printPreorder(tree.root);
    cout<<endl;


    tree.printInRange(tree.root,i,j, s);
    cout<<"# Nodes within range are : ";
    for(auto x: s){
      cout<<x<<" ";
    }
    cout<<endl;
    s.clear();
  }
  return 0;
}
