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

  void display(node *temp) {
			if (temp == NULL) {
				return;
			}
			string str = "";

			if (temp->left != NULL) {
				str += to_string((temp->left)->data);
			} else {
				str += "END";
			}

			str += " => " + to_string(temp->data) + " <= ";

			if (temp->right != NULL) {
				str += to_string((temp->right)->data);
			} else {
				str += "END";
			}

      cout<<str<<endl;
			display(temp->left);
			display(temp->right);
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
  cin>>n;
  for(i=0;i<n;i++){
    cin>>inOrder[i];
  }
  int k=0;
  i=0;
  tree.root = tree.buildFromPreAndInOrder(preOrder, inOrder,i,n-1, k);
  tree.display(tree.root);

  return 0;
}
