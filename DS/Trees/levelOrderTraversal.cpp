#include <iostream>
#include <queue>
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

    void levelOrderTraversal(Node *root){
      queue<Node*> s;
      s.push(root);
      int i = 0;
      Node* temp;
      while(!s.empty() && i < 20){
        temp = s.front();
        i++;
        if(temp->left!=NULL){
          s.push(temp->left);
        }
        if(temp->right!=NULL){
          s.push(temp->right);
        }
        cout<<temp->value<<" ";
        s.pop();
      }
    }
};


int main(){

    BST bst;

    bst.addNode(4,root);
    bst.addNode(3,root);
    bst.addNode(2,root);
    bst.addNode(1,root);
    bst.addNode(10,root);
    bst.addNode(6,root);
    bst.addNode(5,root);
    cout<<"Level Order: "<<endl;
    bst.levelOrderTraversal(root);
    cout<<endl;
    cout<<"Done"<<endl;
  return 0;
}
