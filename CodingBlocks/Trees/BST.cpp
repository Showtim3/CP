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

  void levelOrderPrint(map<int, vector<int> > &m){
    _levelOrderPrint(root, m, 0);
    cout<<"Done lvlOrder"<<endl;
  }

  void _levelOrderPrint(node *root, map<int, vector<int> > &m, int lvl) {

    if(root==NULL){
      return;
    }
    cout<<root->data<<endl;
    m[lvl].push_back(root->data);
    _levelOrderPrint(root->left, m, lvl+1);
    _levelOrderPrint(root->right, m, lvl+1);
  }
};

int main(){
  BST tree;

  int d;
  while(true){
    cin>>d;
    if(d==-1){
      break;
    }
    tree.insert(tree.root,d);
  }


  map<int, vector<int> > m;
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
