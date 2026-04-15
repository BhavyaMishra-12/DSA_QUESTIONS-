#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class TreeNode{
      public:
         int val;
         TreeNode* left ;
         TreeNode* right;

         TreeNode(int data){
              val = data;
              left = right = NULL;
         }
};

TreeNode* buildtree( TreeNode* root, int val){
        if(root == NULL){
             root = new TreeNode(val);
        }

        if(val < root -> val){
             root -> left = buildtree(root -> left , val);
        }

        if(val > root -> val){
             root -> right = buildtree(root -> right , val);
        }

        return root;
}

// let us create a binary search tree
TreeNode* bst( vector<int>v){
      TreeNode* root = NULL;
      for( int i = 0 ; i < v.size(); i++){
            root = buildtree(root , v[i]);
      }
      return root;
}

// inorder with a prev pointer 
void inorder(TreeNode* root, TreeNode* &prev){

      if( root == NULL) return;

      inorder(root -> left, prev);

      if( prev != NULL){
           cout << "(" << prev -> val << "," << root -> val << ")" << endl;          
      }

      prev = root;
      inorder(root -> right, prev);

}

int main(){
     
       vector<int>v = {5,3,2,7,1,9,10,11};
       TreeNode* root = bst(v);
       TreeNode* prev = NULL;
       inorder(root, prev);

}