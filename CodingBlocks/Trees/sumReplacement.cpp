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

  int getSubsetSum(node *root){
    if(root==NULL){
      return 0;
    }
    int leftSum=0;
    int rightSum=0;
    if(root->left){
      leftSum = getSubsetSum(root->left);
    }
    if(root->right){
      rightSum =  getSubsetSum(root->right);
    }

    return leftSum+rightSum+root->data;
  }
  // node* sumReplacement(node *temp){
  //   cout<<"Calling "<<temp->data<<endl;
  //   if(temp==NULL){
  //     return NULL;
  //   }
  //
  //   node *root2 = new node(temp->data);
  //   if(temp->left!=NULL){
  //     root2->left = sumReplacement(temp->left);
  //   }
  //   if(temp->right!=NULL){
  //     root2->right = sumReplacement(temp->right);
  //   }
  //   if(temp->left==NULL && temp->right==NULL){
  //       root2->data= getSubsetSum(temp);
  //   } else
  //   root2->data= getSubsetSum(temp) - temp->data;
  //
  //   return root2;
  // }

  int replaceOptimized(node *temp){
    if(temp==NULL){
      return 0;
    }
    int original = temp->data;
    temp->data = getSubsetSum(temp)-original;


    //
    if(temp->left!=NULL){
      replaceOptimized(temp->left);
    }
    if(temp->right!=NULL){
      replaceOptimized(temp->right);
    }
    if(temp->left==NULL && temp->right==NULL) {
      temp->data+=original;
    }
    return temp->data+original;
  }

};

int main(){
  BinaryTree tree;
  BinaryTree tree2;
  //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
  tree.root = tree.takeInputInPreOrder();
  tree.printBFS();
  tree.replaceOptimized(tree.root);
  tree.printBFS();
  // tree2.root = tree.sumReplacement(tree.root);
  // tree2.printBFS();
  // cout<<tree.getDiameter()<<endl;
  return 0;
}
