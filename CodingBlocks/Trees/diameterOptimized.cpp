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

struct props{
  int height;
  int diameter;
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

  props getProps(node *root){
    if(root==NULL){
      props p;
      p.diameter = 1;
      p.height = 0;
      return p;
    }
    props ans;
    ans.diameter = getProps(root->left).diameter + getProps(root->left).diameter + 1;
    ans.height = 1+max(getProps(root->left).height,getProps(root->left).height);
    return ans;
  }

  int getDiameter(node *root){
    if(root==NULL){
      return 0;
    }
    int leftgetProps = getProps(root->left).height;
    int rightgetProps = getProps(root->right).height;
    int d = max(leftgetProps+rightgetProps+1, max(getProps(root->left).diameter, getProps(root->right).diameter));
    return d;
  }
};

int main(){
  BinaryTree tree;
  //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
  tree.root = tree.takeInputInPreOrder();
  cout<<tree.getProps(tree.root).height<<endl;
  cout<<tree.getDiameter(tree.root)<<endl;
  // cout<<tree.getDiameter()<<endl;
  return 0;
}
