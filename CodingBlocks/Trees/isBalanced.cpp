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

  class BinaryTree {

  public:
    node* root;
    BinaryTree(){
      root = NULL;
    }
    struct props {
      bool isBalanced;
      int height;
    };
    node* takeInputInPreOrder(){
      int d;
      cin>>d;
      node *temp = new node(d);
      cin.ignore();
      string present;
      cin>>present;
      if(present=="true"){
        temp->left=takeInputInPreOrder();
      }
      cin>>present;
      if(present=="true"){
        temp->right=takeInputInPreOrder();
      }
      return temp;
    }

    props isTreeBalanced(node *root){
        if(root==NULL){
          props p;
          p.height=0;
          p.isBalanced = true;
          return p;
        }

        props isLeftBalanced = isTreeBalanced(root->left);
        props isRightBalanced = isTreeBalanced(root->right);
        int leftHeight = isLeftBalanced.height;
        int rightHeight = isRightBalanced.height;
        props current;
        current.isBalanced = isLeftBalanced.isBalanced && isRightBalanced.isBalanced && (abs(leftHeight-rightHeight) <=1);
        current.height = 1+max(leftHeight, rightHeight);
        return current;
    }


  };

  int main(){
    BinaryTree tree;
    tree.root = tree.takeInputInPreOrder();
    if(tree.isTreeBalanced(tree.root).isBalanced){
      cout<<"true"<<endl;
    }else cout<<"false"<<endl;
    return 0;
  }
