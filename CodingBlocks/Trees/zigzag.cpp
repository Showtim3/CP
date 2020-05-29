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

void performLevelOrder(node *root, int lvl, map<int, vector<int> > &m){
  if(root==NULL) return;

  m[lvl].push_back(root->data);
  performLevelOrder(root->left, lvl+1, m);
  performLevelOrder(root->right, lvl+1, m);
}
};



int main(){
  BinaryTree tree, tree2;
  tree.root = tree.takeInputInPreOrder();
  map<int, vector<int> > m;
  tree.performLevelOrder(tree.root,0,m);
  bool leftToRight = true;
  for(auto x: m){
    if(leftToRight){
      for(int j=0;j<x.second.size();j++){
        cout<<x.second[j]<<" ";
      }
    }
    if(!leftToRight){
      for(int j=x.second.size()-1;j>=0;j--){
        cout<<x.second[j]<<" ";
      }
    }
    leftToRight=!leftToRight;
  }
  cout<<endl;

  return 0;
}
