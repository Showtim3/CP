#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>     // std::string, std::to_string

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

  node* buildFromPreAndInOrder(vector<int> preOrder, vector<int> inOrder, int i, int j, int &k){
    if(k>preOrder.size()-1 || i>j || j<i){
      return NULL;
    }
    node *root = new node(preOrder[k]);
    vector<int>::iterator it = find(inOrder.begin(), inOrder.end(), preOrder[k]);
    int index = int(it-inOrder.begin());
    k=k+1;
    root->left = buildFromPreAndInOrder(preOrder, inOrder, i, index-1,k);
    root->right = buildFromPreAndInOrder(preOrder, inOrder, index+1, j,k);
    return root;
  }

  void printInorder(node *root){
    if(root==NULL) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
  }

  int countNodesInLargestSubtree(node *temp, int &maxCount){
    if(temp==NULL) return 0;

    int leftMax = countNodesInLargestSubtree(temp->left, maxCount);
    int count = 1+leftMax;
    if(leftMax && (temp->left)->data<=temp->data){
      count+=1;
      maxCount=max(maxCount, count);
    } else if(leftMax && (temp->left)->data>temp->data){
      count=1;
    }
    int rightMax = countNodesInLargestSubtree(temp->right, maxCount);
    if(rightMax && (temp->right)->data>=temp->data){
      count+=1;
      maxCount=max(maxCount, count);
    } else if(rightMax && (temp->right)->data<=temp->data){
      count=1;
    }

    return count;
  }

};

int main(){
  BinaryTree tree;
  int n,i;
  cin>>n;
  vector<int> preOrder, inOrder;
  preOrder.resize(n);
  inOrder.resize(n);
  for(i=0;i<n;i++){
    cin>>preOrder[i];
  }
  for(i=0;i<n;i++){
    cin>>inOrder[i];
  }
  int k=0;
  i=0;
  tree.root = tree.buildFromPreAndInOrder(preOrder, inOrder,i,n-1, k);
  int maxCount = 0;
  cout<<tree.countNodesInLargestSubtree(tree.root, maxCount)<<endl;

  return 0;
}
