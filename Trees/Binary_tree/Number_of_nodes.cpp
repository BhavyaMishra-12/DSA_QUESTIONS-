#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node
{
    public:
       int data ;
       Node* left;
       Node* right;

    Node( int val)
    {
         data = val ;
         left = right = NULL ;
    }
};

// using queue 

Node* buildTree(vector<int>v)
{
     if( v.size() == 0 || v[0] == -1 ) return NULL ;

     Node* root = new Node(v[0]);

     queue<Node*>q ;
     q.push(root);

     int i = 1;

     while( !q.empty() &&  i < v.size() )
     {
  
          Node* curr = q.front() ;
          q.pop();


        //   left child
          if( v[i] != -1 )
          {
               curr -> left = new Node(v[i]);
               q.push( curr -> left);
          }
          i++;


        //  right child
          if( i < v.size() && v[i] != -1 )
          {
               curr -> right = new Node( v[i]);
               q.push(curr -> right);
          }
          i++;

     } 
    return root;
}


// number of nodes 
int count( Node* root )
{
    if( root == NULL ) return 0;

    int l_count = count( root -> left);
    int r_count = count ( root -> right);

    return l_count + r_count + 1 ;

}

// sum of nodes
int sum( Node* root)
{
     if( root == NULL ) return 0;

     int left_sum = sum( root -> left );
     int right_sum = sum ( root ->  right);

     return root -> data + left_sum + right_sum ;

}

int main()
{
    vector<int>nodes = { 1 ,2 ,-1 ,-1 ,3 ,4 ,5 };
    Node* root = buildTree(nodes);
    cout << count(root) << endl;
    cout << sum(root) << endl ;
    
}