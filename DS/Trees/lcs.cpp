#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int value;
  Node* left;
  Node* right;
} *root;


class BST{
public:

    BST(){
      root = NULL;
    }

    Node* getNewNode(int value){
      Node *temp = new Node();
      temp -> value = value;
      temp -> left = NULL;
      temp -> right = NULL;
      return temp;
    }

    void addNode(int value, Node *node){
      Node *temp = getNewNode(value);
      if(root==NULL){
        root = temp;
        cout<<"Added the root"<<endl;
      } else if(value < node -> value){
        if(node->left==NULL){
          node -> left = temp;
        } else {
          addNode(value, node -> left);
        }
      } else if(value > node -> value){
        if(node -> right == NULL){
          node -> right = temp;
        } else {
          addNode(value, node -> right);
        }
      }
    }

    // the logic to find the lowest common ancestor of a binary tree
    void findLCS(int value1,int value2){
      vector<int> v1;
      vector<int> v2;
      bool found = false;
      findPath(v1, root, value1, found);
      findPath(v2, root, value2);

      // if(path1){
        for(auto x: v1){
          cout<<x<<" ";
        } cout<<endl;
      // }

      // if(path2){
        for(auto x: v2){
          cout<<x<<" ";
        } cout<<endl;
      // }



    }

    void findPath(vector<int> &path, Node *temp, int value){

      if(temp==NULL){
          path.clear();
          return;
      }

      if(temp -> value == value){
        path.push_back(temp->value);
        return;
      }

      if(temp -> left !=NULL){
          path.push_back(temp->value);
          findPath(path, temp->left, value);
      }

      if(temp->right!=NULL){
          path.push_back(temp->value);
          findPath(path, temp->right, value);
      }
    }


};


int main(){

    BST bst;

    bst.addNode(4,root);
    bst.addNode(3,root);
    bst.addNode(10,root);
    bst.addNode(6,root);
    bst.addNode(5,root);
    bst.addNode(11,root);
    bst.addNode(2,root);
    bst.addNode(7,root);
    bst.addNode(1,root);
    bst.addNode(22,root);
    bst.addNode(15,root);
    cout<<"Inorder: "<<endl;
    bst.findLCS(6,5);
    cout<<endl;
  return 0;
}
