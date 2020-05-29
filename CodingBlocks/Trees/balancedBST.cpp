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

  void printPreorder(node *temp){
    if(temp==NULL) return;

    cout<<temp->data<<" ";
    printPreorder(temp->left);
    printPreorder(temp->right);
  }
};

int main(){

  int n,t;
  cin>>t;
  while(t--){
    BST tree;
    cin>>n;
    vector<int> v;
    int i,ele;
    v.reserve(n);
    for(i=0;i<n;i++){
      cin>>ele;
      v.push_back(ele);
    }

    tree.root = tree.createBST(v, 0, n-1);
    tree.printPreorder(tree.root);
    cout<<endl;
    v.clear();
  }
  return 0;
}
