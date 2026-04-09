#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
         int val;
         Node* left ,* right ;

         Node(int data){
               val = data;
               left = right = NULL;
       }
};

// search in a binary tree
bool search_tree(Node* root ,int key){
      if(root == NULL) return false;

      if( root -> val == key ) return true;

      if( key > root -> val )
      {
           search_tree(root -> right, key);
      }
      else{
           search_tree(root -> left , key);
      }
}

Node* BuildTree( Node* root , int val){
          
          if( root == NULL ){
               root = new Node(val);
          }     
          if( val < root -> val ){
               root -> left = BuildTree( root -> left , val );
          }
          if( val > root -> val ){
               root -> right = BuildTree( root -> right , val );
          }
          return root;             
}

void inorder(Node* root){
         if( root == NULL) return;
        
         inorder( root -> left);
         cout<< root -> val << " ";
         inorder( root -> right);
}


int main()
{
        vector<int>v = {3,2,1,6,5,4};
        Node* root = NULL;
        for(int i : v){
              root = BuildTree(root , i);
        }

        inorder(root);
        cout<<endl;
        cout<< search_tree(root, 8) <<endl;
        cout<< search_tree(root, 6) <<endl;
        return 0;
       
}