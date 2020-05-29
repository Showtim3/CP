#include <iostream>
#include <set>
#include <queue>
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
  node * takeInputInLevelOrder(){
    int d;
    cin>>d;

    node *root = new node(d);
    queue<node*> q;
    q.push(root);
    int left,right;
    while(!q.empty()){
      node *temp = q.front();
      q.pop();
      cin>>left>>right;
      if(left!=-1){
        temp->left = new node(left);
        q.push(temp->left);
      } else temp->left=NULL;
      if(right!=-1){
        temp->right = new node(right);
        q.push(temp->right);
      } else temp->right=NULL;
    }
    return root;
  }

  int height(node *root, int d, int lvl){
    if(root==NULL) return 0;
    if(root->data==d){
      return lvl;
    }
    int left = height(root->left, d,lvl+1);
    if(left!=0){
      return left;
    }
    int right = height(root->right, d,lvl+1);
    return right;

  }

  void preOrderTraversal(map<int, int > &m, node *root, node *temp, int hd){
    if(temp==NULL){
      return;
    }

    if(m.count(hd)){
        int present = m[hd];
        int low;
        if(height(root, m[hd], 0) > height(root,temp->data, 0)){
          low=m[hd];
        } else {
          low=temp->data;
        }
        m[hd] = low;
    } else {
      m[hd]=temp->data;
    }

    preOrderTraversal(m, root, temp->left, hd-1);
    preOrderTraversal(m, root, temp->right, hd+1);
  }
};




bool comparator(pair<int, int> a , pair<int, int> b) {
  if(a.second < b.second){
    return true;
  }
  if(a.second > b.second){
    return false;
  }
}

int main(){

  BST tree;
  tree.root = tree.takeInputInLevelOrder();
  vector<pair<int, int> > preOrder;
  map<int, int >m;
  int i;
  tree.preOrderTraversal(m,tree.root,tree.root, 0);

  // sort(preOrder.begin(), preOrder.end(), comparator);
  // for(int i=0;i<preOrder.size();i++){
  //   cout<<preOrder[i].first<<" "<<preOrder[i].second<<endl;
  // }
  // for(auto x: m){
  //   cout<<x.first<<" => "<<x.second<<endl;
  //   cout<<endl;
  // }
  // cout<<endl;

  for(auto x: m){
    cout<<x.second<<" ";
  } cout<<endl;
}
