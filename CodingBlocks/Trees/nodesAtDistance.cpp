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

  int getDepthOfNode(node*root, int d, int &lvl){
    if(root==NULL){
      return 0;
    }
    if(root->data==d){
      return lvl;
    }

    if(root->left){
      lvl+=1;
      getDepthOfNode(root->left,d,lvl);
    }
    if(lvl==0 && root->right){
      getDepthOfNode(root->left,d,lvl);
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
      m[lvl].push_back(root->data);
      _levelOrderPrint(root->left, m, lvl+1);
      _levelOrderPrint(root->right, m, lvl+1);
    }

    void printSubtreeNode(node *root,int k){
      if(root==NULL){
        return;
      }
      if(k==0){
        cout<<root->data<<endl;
        return;
      }
      printSubtreeNode(root->left, k-1);
      printSubtreeNode(root->right, k-1);
    }

    void printNodesAtDistance(node *root, node *target, int k){
      if(root==NULL){
        return;
      }
      bool found=false;
      printSubtreeNode(target, k);
      // printAncestor();
      // printOtherSubtree();
    }

    node* getNodeWithNode(node *root, int d, bool &found){
      if(root==NULL){
        return NULL;
      }
      if(root->data==d){
        found=true;
        return root;
      }
      node *left = getNodeWithNode(root->left, d, found);
      if(found){
        return left;
      }
      node *right = getNodeWithNode(root->right, d, found);
      return right;
    }

};

int main(){
  BinaryTree tree;
  //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
  tree.root = tree.takeInputInPreOrder();
  int level = 0;
  map<int, vector<int> > m;
  tree.getDepthOfNode(tree.root, 7, level);
  // cout<<level<<endl;
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
  int d=10;int k=2;
  bool found=false;
  node *target = tree.getNodeWithNode(tree.root,8, found);
  cout<<target->data<<endl;
  cout<<"=========="<<endl;
  tree.printNodesAtDistance(tree.root, target, k);
  return 0;
}
