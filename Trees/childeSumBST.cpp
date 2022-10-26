#include<bits/stdc++.h>
using namespace std;

struct Node{
  int val;
  Node *left,*right;
};

//new node function
Node* newNode(int val) {
  Node* node = new Node;
  node->val=val;
  node->left=node->right=NULL;
  return (node);
}

int childsum(Node* node){
  int sum=0;
  if(node==NULL||node->left==NULL&&node->right==NULL){return 1;}
  else{
    if(node->left!=NULL)
    sum+=node->left->val;

    if(node->right!=NULL)
    sum+=node->right->val;

    return ((node->val==sum)&&childsum(node->left)&&childsum(node->right));
  }
}

int main()
{
    struct Node *root = newNode(10);
    root->left     = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->right = newNode(2);
    if(childsum (root))
        cout << "The given tree satisfies "
            << "the children sum property ";
    else
        cout << "The given tree does not satisfy "
            << "the children sum property ";
 
    return 0;
}