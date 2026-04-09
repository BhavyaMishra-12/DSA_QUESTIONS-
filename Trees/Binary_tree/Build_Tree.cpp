// // construct a binary tree using preorder 

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node( int val)
//     {
//         data = val;
//         left = right  = NULL;
//     }
// };

// static int idx = -1;
// Node* Buildtree( vector<int>preorder )
// {
//     idx++;
//     if( preorder[idx] == -1) return NULL;

//     Node* root = new Node( preorder[idx]) ;
//     root -> left = Buildtree(preorder);
//     root -> right = Buildtree(preorder);

//     return root;
// }


// int main()
// {
//     vector<int>preorder = {1 , 2 , -1 , -1 , 3, 4, -1 , -1 , 5 , -1 ,-1 };

//     Node* root = Buildtree(preorder);
//     cout << root -> data << endl;

//     return 0;
// }



// construct a complete binary tree from 0 to 100 .
#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
       int data;
       Node* left;
       Node* right;

       Node( int val)
       {
            data = val;
            left = right = NULL ;
        
       }
};

// using two pointers but avoid null values
Node* buildtree(int x)
{
        vector< Node* > nodes;
        for( int i = 0 ; i <= x ; i++)
        {
             nodes.push_back( new Node(i));
        }
         
         int parent = 0 ;
         int child = 1 ;

         while( child <= x )
         { 

            nodes[parent] -> left = nodes[child++];

            if( child <= x )
            {
                 nodes[parent] -> right = nodes[child++];
            }

            parent++;

         }

         return nodes[0];


}

//  to see the tree
void levelOrder(Node* root)
{
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();

        if( node == NULL )
        {
             if( !q.empty()) 
             {
                 q.push( NULL);
                 cout << endl ;
                 continue;
             }
             else
                break;
        }

        cout << node->data << " ";

        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }
}


//  handle the null values as well  using two pointers 
Node* Buildtree( vector<int>v )
{   
    
    vector<Node*>nodes;
    for(int i = 0 ; i <  v.size() ; i++){ 
         if( v[i] == -1 )
                nodes.push_back( NULL );
         else
               nodes.push_back( new Node( v[i] ));
      }
    
    int parent = 0 ;
    int child = 1;

   while( child < nodes.size() )
   {
        
        if( nodes[parent] == NULL ) 
        {
           parent++;
           continue ;
        }
       
         nodes[parent] -> left = nodes[child++];
         if( child < nodes.size() ){
              nodes[parent] -> right = nodes[child++];
         }

         parent++ ;
    }
   
    return nodes[0] ;

}



int main()
{     
      int x;
      cout << "enter the size for binary tree" << endl ;
      cin >> x ;

      Node* root =  buildtree(x);
      levelOrder(root);



}