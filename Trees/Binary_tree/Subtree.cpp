// if i want the trees to be identical in exact structure and give false in edge cases 

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
       int val;
       Node* left;
       Node* right;

       Node( int data )
       {
             val = data ;
             left = right = NULL ;
       }  
};

Node* buildTree( vector<int>v )
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
bool isidentical( Node* root , Node* subroot)
{
    if( root == NULL || subroot == NULL ) return root == subroot;
    
    bool left =  isidentical( root -> left ,  subroot -> left );
    bool right = isidentical( root -> right , subroot -> right );

    return left && right && root -> val == subroot -> val ;

}

bool isSame( Node* root , Node* subroot )
{ 
    if( root == NULL || subroot == NULL ) return root == subroot ;

    if( root -> val == subroot -> val && isidentical( root , subroot )) return true;

    bool left = isSame( root -> left , subroot);
    bool right = isSame( root -> right , subroot);

    return left || right ;
}

// subtree match with extra branches


int main()
{
    vector<int> tree1 = {1 , 1};
    vector<int> tree2 = {1};

    Node* root = buildTree(tree1);
    Node* subroot = buildTree(tree2);


    if(isSame(root, subroot))
        cout << "Subtree exists";
    else
        cout << "Subtree does not exist";
}