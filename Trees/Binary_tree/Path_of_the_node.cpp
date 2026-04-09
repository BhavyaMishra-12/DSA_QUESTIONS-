#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

class TreeNode
{
     public:
        int val;
        TreeNode* left ;
        TreeNode* right;

     TreeNode( int data )
     {
         val = data;
         left = right = NULL;
     }
};

TreeNode* Buildtree( vector<int>v )
{
      queue<TreeNode*>q;
      TreeNode* root = new TreeNode(v[0]);
      q.push( root );
      int i = 1;
      while( !q.empty() && i < v.size() )
      {

        TreeNode* curr = q.front();
        q.pop(); 
        
         if( v[i] != -1 ){
                curr ->left = new TreeNode( v[i]);
                q.push( curr -> left );
         }
         i++;
         if( i < v.size() && v[i] != -1 )
         {
              curr -> right = new TreeNode( v[i]);
              q.push( curr -> right );
         }
         i++;

      }
    return root ;
}

//  okay let us check if the node exist in the tree or not
bool exist( TreeNode* root , int p )
{
    if( root == NULL ) return false;
    if( root -> val == p )
    {
         return true ;
    }

    bool in_left =  exist( root -> left , p );
    bool in_right = exist( root -> right , p);

    return  in_left || in_right ;

}


//  now we store the path of a particular node p 
bool path_of_the_node( TreeNode* root , int p , vector<TreeNode*>&path )
{ 
     if( root == NULL ){
         return false ;
     }
    
     path.push_back( root );

     if( root -> val  == p ){
          return true ;
     }

     bool left =  path_of_the_node( root -> left , p , path );
     bool right =  path_of_the_node( root -> right , p , path );

     if( left || right ) return true ;
     path.pop_back();
     return false;
     
     
}

int main()
{
      vector<TreeNode*>vec;
      vector<int>v = { 1, 2, 3, 4, 5, 6 ,7, 8 , -1 , -1, -1 , -1,-1,10 };
     
     TreeNode* root = Buildtree(v);
     path_of_the_node( root , 10 , vec );

     for( auto i : vec )
     {
           cout << i -> val << " " ;
     }
     return 0 ;      
}
