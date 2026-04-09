#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
         int val;
         Node* left;
         Node* right;

         Node( int data){
               val = data;
               left = right = NULL;
         }
};

//delete tree
Node* delete_the_binary( Node* root, int val){

        if(root == NULL) return NULL;

        if(val < root -> val){
                 root -> left  =  delete_the_binary(root -> left, val);
        }
        else if(val > root -> val){
                 root -> right =  delete_the_binary(root -> right, val);
        }

        else{
            // case1 : no child
            if( !root -> left && !root -> right ){
                  delete root ;
                  return NULL;
            }

            // case2 : one child 
            else if(!root -> left){
                  Node* temp = root -> right;
                  delete root;
                  return temp;
            }
            
            else if(!root -> right){
                  Node* temp = root -> left;
                  delete root;
                  return temp;
            }

            //case3 : two children 
            else{
                  Node* I_S = root -> right;
                  while( I_S -> left){
                        I_S = I_S -> left;
                  }

                  root -> val = I_S -> val ;
                  
                  root -> right = delete_the_binary( root -> right , I_S->val);
            }
        }      
        return root;   
}

// build tree
Node* buildtree( Node* root, int val){
         
    if( root == NULL ) 
        return new Node(val);

    if( val < root -> val){
       root -> left = buildtree(root -> left, val);
    }

    else{
       root -> right = buildtree(root -> right, val);
    }

    return root;
}

Node* BST( vector<int>v){
      Node* root = NULL;
      for( int i : v){
          root = buildtree(root, i);
      }
      return root;
}

void inorder(Node* root){
      if(root )
}

int main(){

      vector<int>v = {1,2,3,4,5,6,7};

      
      return 0;

}

