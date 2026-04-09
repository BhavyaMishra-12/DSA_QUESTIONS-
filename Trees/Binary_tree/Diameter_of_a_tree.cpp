#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public :
       int val;
       Node* left ;
       Node* right;

       Node( int data  )
       {
            val = data ;
            left = right = NULL ;
       }
};


Node* buildtree( vector<int>v )
{
     queue<Node*>q;
     Node* root = new Node(v[0]);
     q.push(root);
     int idx = 1 ;

     while( !q.empty() && idx < v.size() ){
            
           Node* curr = q.front();
           q.pop();

           if( v[idx] != -1 ) 
           {
                curr -> left = new Node( v[idx] );
                q.push( curr -> left );
           }
           idx++ ;
           
           if( idx < v.size() && v[idx] != -1 )
           {
                curr -> right = new Node( v[idx] );
                q.push( curr -> right );
           }
           idx++ ;

     }
     return root ;
}


int dia = 0 ; 
// diameter of a tree 
int height( Node* root )
{
   if( root == NULL ) return 0;

   int left_ht = height( root -> left );
   int right_ht = height( root -> right );

   dia = max( dia , left_ht + right_ht );                                                                                         

   return max( left_ht , right_ht ) + 1 ; 

}

int main(){

   vector<int>v = { 1 ,2,3,4 , -1 , -1 , -1 , 5 , 6 ,7};
   Node* root =  buildtree(v);
   height(root);
   cout << "diameter of the tree is " << dia;

   return 0;
}