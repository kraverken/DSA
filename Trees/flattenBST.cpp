#include<bits/stdc++.h>
using namespace std;

//node structure
struct Node{
  int val;
  Node *left, *right;
};

//new node function
Node* newNode(int val) {
  Node* node = new Node;
  node->val=val;
  node->left=node->right=NULL;
  return (node);
}

void flatten(Node* root) {
  if(root==NULL||root->left==NULL||root->right==NULL) return;
  //move left to right
  if(root->left!=NULL){
    flatten(root->left);
    struct Node* tempR=root->right;
    root->right=root->left;
    root->left=NULL;
    struct Node* tempL=root->right;
    while(tempL->right!=NULL){tempL=tempL->right;}
    tempL->right=tempR;
  }
  flatten(root->right);
}

//inorder traversal
void inorder(Node *root){
  if(root==NULL) return;
  inorder(root->left);
  cout<<" "<<root->val<<" ";
  inorder(root->right);
}


int main(){
  Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->right = newNode(6);
    flatten(root);
    cout << "The Inorder traversal after flattening binary tree ";
    inorder(root);
    return 0;
}

