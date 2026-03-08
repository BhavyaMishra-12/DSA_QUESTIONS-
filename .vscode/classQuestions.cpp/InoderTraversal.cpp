#include<bits/stdc++.h>
using namespace std;

 // creating a node structure for one node  == current root
struct TreeNode{
    int data ;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* insert( TreeNode*root , int val)
{
    if(root == nullptr)
    {   
        TreeNode* newNode = new TreeNode();
        newNode -> data = val;                              // passing the current value into the root which is intialised as data in the struct node
        newNode -> left = newNode -> right = nullptr;
        return newNode ;  
    }
      
    if( val > root -> data )
    {
        insert( root->right , val);
    }
    if( val < root -> data)
    {
        insert( root -> left , val);
    }
    return root ; 
}
int main ()
{
      TreeNode* root = nullptr ;
      
}