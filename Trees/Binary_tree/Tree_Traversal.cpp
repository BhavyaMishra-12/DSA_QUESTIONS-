//  PREORDER TRAVERSAL
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node( int val)
    {
        data = val;
        left = right  = NULL;
    }
};

static int idx = -1;
Node* Buildtree( vector<int>preorder )
{
    idx++;
    if( preorder[idx] == -1) return NULL;

    Node* root = new Node( preorder[idx]) ;
    root -> left = Buildtree(preorder);
    root -> right = Buildtree(preorder);

    return root;
}



// pre order traversal == root left right 
void  preorderr(Node* root)
{
     if( root == NULL )
            return;
 
     cout <<  root -> data << " ";
     preorderr( root -> left );
     preorderr( root -> right );
     
}

// inorder traversal == left root right 
void inorder( Node* root)
{
    if( root == NULL )
        return;
    
    inorder( root -> left);
    cout << root -> data << " ";
    inorder( root -> right );
     
}

// postorder traversal  == left right root
void postorder( Node* root)
{
     if( root == NULL )
        return;
    
    postorder( root -> left );
    postorder( root -> right );
    cout << root -> data << " ";
}
 

// level order traversal
void levelorder( Node* root)
{
     queue<Node*> q ;
     
     q.push(root);
     q.push(NULL);

     while( q.size() > 0 )
     {
        
        Node* curr = q.front();
        q.pop();

        if( curr == NULL  )   
           {   
              if(!q.empty() )
                {
                    cout<<endl;
                    q.push(NULL);
                    // con. is important as null value deos not have any data
                    continue; 
                }
              else
                  break;
            }
           
        cout << curr -> data << " ";
         
        if( curr -> left != NULL ) q.push(curr -> left );
        if( curr -> right != NULL ) q.push(curr -> right ); 
    
     }

}



int main()
{
    vector<int>preorder = {1 , 2 , -1 , -1 , 3, 4, -1 , -1 , 5 , -1 ,-1 };

    Node* root = Buildtree(preorder);
    cout << root -> data << endl;

    // preorderr(root); cout<<endl;
    // inorder(root); cout<<endl;
    // postorder(root);cout<<endl;
    levelorder(root);
    
    return 0;
}



