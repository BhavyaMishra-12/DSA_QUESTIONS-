 #include<bits/stdc++.h>
 using namespace std;
               // structure of a tree 
  struct Treenode
{
    int data;
    Treenode* left;
    Treenode* right;
};




 // for the insertion of nodes in the tree
  Treenode* insert(Treenode* root , int data)  
  {

      if(root == nullptr) 
      {
        Treenode* newNode = new Treenode();
        newNode -> data = data ;
        newNode -> left = newNode -> right = nullptr ; 
        return newNode;
      }

      if( data < root -> data)
      {
        root -> left = insert(root -> left , data);
      }

      else
      {
        root -> right = insert(root -> right , data);
      }

      return root ;

  }




  //  inorder traversal
  void inorder( Treenode* root ) // left root right
 {
        if( root == nullptr )
                return;
        
        inorder(root -> left);
        cout << root -> data  << " ";
        inorder(root -> right);
 }

   

  int main()
  {
    int x;int opn;

    cout << "enter the number of operation "<<endl;
    cin>> opn;

    
    Treenode* root = nullptr ;

    while(opn > 0){
       int choice;
        cout << "\nChoose operation:\n1. Insert Nodes\n2. Inorder Traversal\n";
        cin >> choice;

    switch(choice){
     case 1:
      {
        cout << "enter the number of nodes to be inserted into tree "<<endl;
        int n ;
        cin >> n;
        cout << "enter the values of nodes:\n";

        for(int i = 0 ;  i < n ; i++)
         {
              int val;
              cin >> val ;
              cout<<endl;
             root = insert(root , val);
         }   break;
     }

    case 2:
           {
            cout << " inorder traversal :";
            inorder(root);
            cout<< endl ;
             break;
            }
      
    default:
                cout << "Invalid choice!\n";
        }

        opn--;  // decrease operation count
        }
    }
    


