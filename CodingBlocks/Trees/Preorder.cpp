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
    if(d == -1){
      return NULL;
    }

    node *temp = new node(d);
    temp->left=takeInputInPreOrder();
    temp->right=takeInputInPreOrder();
    return temp;
  }
  void preOrderPrint(){
    cout<<"Printing In PreOrder"<<endl;
    _preOrderPrint(root);
    cout<<endl;
  }

  void _preOrderPrint(node *root){
    if(root==NULL){
      return;
    }
    cout<<root->data<<" ";
    _preOrderPrint(root->left);
    _preOrderPrint(root->right);
  }

  void inOrderPrint(){
    cout<<"Printing In INOrder"<<endl;
    _inOrderPrint(root);
    cout<<endl;
  }

  void _inOrderPrint(node *root){
      if(root==NULL){
        return;
      }
      _inOrderPrint(root->left);
      cout<<root->data<<" ";
      _inOrderPrint(root->right);
  }

  void postOrderPrint(){
    cout<<"Printing In PostOrder"<<endl;
    _postOrderPrint(root);
    cout<<endl;
  }

  void _postOrderPrint(node *root){
      if(root==NULL){
        return;
      }
      _postOrderPrint(root->left);
      _postOrderPrint(root->right);
      cout<<root->data<<" ";
    }

    void levelOrderPrint(map<int, vector<int> > &m){
      _levelOrderPrint(root, m, 0);
      cout<<"Done lvlOrder"<<endl;
    }

    void _levelOrderPrint(node *root, map<int, vector<int> > &m, int lvl) {
      if(root==NULL){
        return;
      }
      m[lvl].push_back(root->data);
      _levelOrderPrint(root->left, m, lvl+1);
      _levelOrderPrint(root->right, m, lvl+1);
    }
};

int main(){
  BinaryTree tree;
  //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
  map<int, vector<int> > m;
  tree.root = tree.takeInputInPreOrder();
  tree.preOrderPrint();
  tree.postOrderPrint();
  tree.inOrderPrint();
  tree.levelOrderPrint(m);
  int itr=0;
  for(auto x: m){
    cout<<"Level "<<itr<<" => ";
    for(int i=0;i<x.second.size();i++){
      cout<<x.second[i]<<" ";
    }
    itr++;
    cout<<endl;
  }

  return 0;
}
