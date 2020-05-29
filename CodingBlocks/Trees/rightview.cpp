#include <iostream>
#include <set>
#include <map>
#include <vector>
#include<queue>
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

  node* takeInputInLevelOrder(){
    int d;
    cin>>d;
    queue<node*> q;
    int c1,c2;

    node *root=new node(d);
    q.push(root);

    while(!q.empty()){
      node *f = q.front();
      q.pop();
      cin>>c1>>c2;
      if(c1!=-1){
        f->left=new node(c1);
        q.push(f->left);
      }
      if(c2!=-1){
        f->right=new node(c2);
        q.push(f->right);
      }
    }
    return root;
  }

    void levelOrderPrint(map<int, vector<int> > &m){
      _levelOrderPrint(root, m, 0);
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
  tree.root = tree.takeInputInLevelOrder();
  tree.levelOrderPrint(m);
  int itr=0;
  for(auto x: m){
    // cout<<x.second[0]<<" "; //left view
    cout<<x.second[x.second.size()-1]<<" ";
    itr++;
  }

  return 0;
}
