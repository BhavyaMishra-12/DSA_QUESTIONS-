#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

class Node {
    public:
       int val;
       Node* left;
       Node* right;

       Node( int data)
       {
          val = data;
          left = right = NULL;
       }
};

Node* Buildtree( vector<int>v )
{
     queue<Node*>q;
     Node* root = new Node(v[0]);
     q.push(root);

     int i = 1 ;
     while( !q.empty() && i < v.size() )
     {
           Node* curr = q.front();
           q.pop();

           cout<< curr -> val << " ";

           if( v[i] != -1 )
           {
                curr -> left = new Node(v[i]);
                q.push( curr -> left );
           }

           i++;
           if(  i < v.size()  && v[i] != -1 )
           {
               curr -> right = new Node(v[i]);
               q.push( curr -> right );
           }
           i++;
           cout << endl;
     }

     return root;

}


// top view of the tree
vector<int> Topview( Node* root  )
{
     queue<pair<Node*,int>>q;
     map< int , int > mp;
     q.push({root , 0});
     
     vector<int>res;



     while( !q.empty() )
     {
          auto curr = q.front();
          q.pop();

          Node* temp  =  curr.first;
          int num = curr.second;

          // auto[temp , num] = q.front();
          // q.pop();

          if( mp.find(num) == mp.end() )
          {
               mp.insert({num , temp -> val});
          }
                                  
         if( temp -> left != NULL ) 
         {
              q.push({ temp -> left , num - 1} );
              
         }
         if( temp -> right != NULL )
         {
              q.push({ temp -> right , num + 1 });
         }
     }

     for( auto &it : mp )
     {
           res.push_back(it.second);
     }

     return res;

     
}
int main()
{
          vector<int>nodes = { 1 ,2 ,3 ,-1, -1 ,4 ,5 };
          Node* root = Buildtree( nodes );
          vector<int>ans = Topview( root );


          for( int x : ans )
          {
                cout <<  x << " ";
          }
     return 0;
}