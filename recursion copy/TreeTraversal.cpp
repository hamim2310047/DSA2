#include <iostream>
using namespace std;

struct node
{
    int val;
    node* left;
    node* right;
    node(int x): val(x),left(NULL),right(NULL);
};
void inorder(node* root){
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}