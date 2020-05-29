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

  node* createBST(vector<int> v, int i, int j){
    if(j<i){
      return NULL;
    }
    int size = (j+i)/2;
    int midElement = v[size];
    node *temp = new node(midElement);
    temp->left = createBST(v,i,size-1);
    temp->right = createBST(v,size+1,j);
    return temp;
  }

  void replaceSum(node *root, int &sum){
    if (root == NULL) return;

    replaceSum(root->right, sum);
    sum += root->data;
    root->data = sum;
    replaceSum(root->left, sum);
  }

  void printPreOrder(node *temp){
    if(temp==NULL) return;

    cout<<temp->data<<" ";
    printPreOrder(temp->left);
    printPreOrder(temp->right);
  }

};

int main(){

    BST tree;
    int n,i,ele;
    cin>>n;
    vector<int> v;
    v.resize(n);
    for(i=0;i<n;i++){
      cin>>v[i];
    }

    tree.root = tree.createBST(v, 0, n-1);
    int sum = 0;
    tree.replaceSum(tree.root, sum);
    tree.printPreOrder(tree.root);
    cout<<endl;
  return 0;
}
