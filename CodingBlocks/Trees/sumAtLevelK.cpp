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
  int childrenCount;
  node** children;
  node(int d){
    this->data = d;
    this->childrenCount = 0;
  }
};

class GenericTree {

public:
  node* root;
  GenericTree(){
    root = NULL;
  }

  node* takeInputInPreOrder(){
    int d, childrenCount;
    cin>>d>>childrenCount;
    node *temp = new node(d);
    temp->childrenCount=childrenCount;
    temp->children = new node*[childrenCount];
    for(int i=0;i<childrenCount;i++){
      temp->children[i]=takeInputInPreOrder();
    }
    return temp;
}

  void levelOrderPrint(map<int, vector<int> > &m){
    _levelOrderPrint(root, m, 0);
    // cout<<"Done lvlOrder"<<endl;
  }

  void _levelOrderPrint(node *root, map<int, vector<int> > &m, int lvl) {
    if(root==NULL){
      return;
    }
    m[lvl].push_back(root->data);
    for(int i=0; i<root->childrenCount;i++){
        _levelOrderPrint(root->children[i], m, lvl+1);
    }
  }
};

int main(){
  GenericTree tree;
  map<int, vector<int> > m;
  tree.root = tree.takeInputInPreOrder();

  int k;
  cin>>k;

  int sum=0;
  tree.levelOrderPrint(m);
  int itr=0;

  for(int i=0;i<m[k].size();i++){
    sum+=m[k][i];
  }
  cout<<sum<<endl;


  return 0;
}
