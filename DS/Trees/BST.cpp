#include <iostream>
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

    void printPostorder(Node* node)
    {
      if (node == NULL)
        return;
      printPostorder(node->left);
      printPostorder(node->right);
      cout << node->value << " ";
    }

    void printInorder(Node* node)
    {
      if (node == NULL)
        return;

      printInorder(node->left);
      cout << node->value << " ";
      printInorder(node->right);
    }

      void printPreorder(Node* node)
      {
      if (node == NULL)
        return;

      cout << node->value << " ";
      printPreorder(node->left);
      printPreorder(node->right);
      }


};


int main(){

    BST bst;

    bst.addNode(4,root);
    bst.addNode(3,root);
    bst.addNode(10,root);
    bst.addNode(6,root);
    bst.addNode(5,root);
    cout<<"Inorder: "<<endl;
    bst.printInorder(root);
    cout<<endl;
    cout<<"Preorder: "<<endl;
    bst.printPreorder(root);
    cout<<endl;
    cout<<"Postorder: "<<endl;
    bst.printPostorder(root);
    cout<<endl;
  return 0;
}
