#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // program 1 .

    // * * * * * 
    // * * * * * 
    // * * * * * 
    // * * * * * 
    /*
    int x ;
    cout << "enter the number"<< endl;
    cin >> x ;
    for(int i = 0 ; i < x ; i++ )
    {
        for(int j = 0 ; j < x ; j ++)
        {
            cout << "* ";
        }
        cout<< "\n";
    }
    */







    // program 2 .

    // *
    // * *
    // * * * 
    // * * * * 
    // int x ;
    // cout << "enter the number"<< endl;
    // cin >> x ;
    // for(int i = 0 ; i < x ; i++ )
    // {
    //     for(int j = 0 ; j < i+1 ; j ++)
    //     {

    //         cout << "* ";
    //     }
    //     cout<< "\n";
    // }





     

    // program 3
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // int x ;
    // cout << "enter the largest number of the pyramid : ";
    // cin >> x ;
    // for(int i = 0; i <= x ; i++)
    // {
    //      for(int j = 1 ; j < i + 1 ; j ++ )
    //      {
    //         cout<< j ;
    //      }
    //      cout << "\n";
    // }
    





// program 4

// 1
// 22
// 333
// 4444
// 55555

//  int x ;
//     cout << "enter the largest number of the pyramid : ";
//     cin >> x ;
//     for(int i = 0; i <= x ; i++)
//     {
//          for(int j = 1 ; j < i + 1 ; j ++ )
//          {
//             cout<< i ;
//          }
//          cout << "\n";
//     }

// }









// program 4

// ****
// ***
// **
// *

//  int x ;
//     cout << "enter the height of the pyramid : ";
//     cin >> x ;
//     for(int i = 0 ; i <= x ; i++)
//     {
//          for(int j = x - i ; j > 0 ; j -- )
//          {
//             cout<< "*";
//          }
//          cout << "\n";
//     }







// program 5

// 12345
// 1234
// 123
// 12
// 1
   
    // int x ;
    // cout << "enter the height of the pyramid : ";
    // cin >> x ;
    // for(int i = 0 ;  i < x ; i ++)
    // {
    //     for(int j = 1 ; j  <= x - i ; j++)
    //     {
    //         cout << j ;
    //     }   
        
    //     cout << "\n";
    // }








      // program 6

        //    *
        //   ***
        //  *****
        // *******

    //  done with the number of * in the last line 

    // int x ;
    // cout << "enter the height of the pyramid : ";
    // cin >> x ;
    // int n = x / 2 ;
    // int temp  = 1;
    // for(int i = 0 ;  i < x - 2; i ++)
    // {
    //     for(int k = 0 ; k < n ; k++ )
    //     { 
    //         cout <<" ";
    //     }
    //     for(int j = 0 ; j < temp ; j ++)
    //     {
    //         cout <<"*";
    //     }
    //     temp = temp + 2 ;
    //     cout  << "\n";
    //     n--;
    // }










      // program 7

        //    *
        //   ***
        //  *****
        // *******

        // try this by dividing it into 3 triangles 

        // int x ;
        // cout << "enter the height of the triangle :   ";
        // cin >> x;
        // for( int i = 0 ; i < x ; i++)
        // {
        //     for( int k = i ; k < x -1 ; k++)
        //     {
        //         cout << " ";             // the key point here is to always print the same number of spaces and stars to get the desigerd patterns
        //     }
        //     for( int j = 0 ; j <= i ; j++)
        //     {
        //         cout << "*" ;
        //     }
        //     for(int l = 0 ; l < i ; ++)
        //     {
        //         cout << "*";
        //     }
        //     cout << "\n";
        // }
       







// program 8

        //    *
        //   ***
        //  *****
        // *******

    // use the length of pyramid to control the task

    // int x ;
    // cout << "enter the height of the pyramid : ";
    // cin >> x ;
 
    // for( int i = 0 ; i < x ; i++)
    // {
    //     for(int k = i ; k < x-1 ; k++ )
    //     {
    //         cout << " ";
    //     }
    //     for(int j = 0 ; j < 2*i + 1 ; j ++ )
    //     {
    //         cout <<  "*";
    //     }
    //     cout << "\n";
    // }











 
   // program 9

    // *******
    //  *****
    //   ***
    //    *
        

    // int x ;
    // cout << "enter the height of the pyramid : ";
    // cin >> x ;
    
    // for( int i = 0 ; i < x ; i++)
    // {
    //     for(int k = 0 ; k < i  ; k++ )
    //     {
    //         cout << " ";
    //     }
    //     for(int j = 2*i ; j < 2*x - 1 ; j++ )   // we canalso take temp variable here  and run j loop with the help of it 2 
    //     {
    //         cout <<  "*";
    //     }
      
    //     cout << "\n";
    // }






// program 10

    //       *
    //      **
    //     ***
    //    ****  
    
    // int x ;
    // cout << "enter the height of the triangle :   ";
    // cin >> x;
    // for( int i = 0 ; i < x ; i++)
    // {
    //     for( int k = i ; k < x -1 ; k++)
    //     {
    //         cout << " ";             // the key point here is to always print the same number of spaces and stars to get the desigerd patterns
    //     }
    //     for( int j = 0 ; j <= i ; j++)
    //     {
    //         cout << "*" ;
    //     }
    //     cout << "\n";
    // }
  














// program 11
        //    *
        //   ***
        //  *****
        // *******
        // *******
        //  *****
        //   ***
        //    *

    // int x ;
    // cout << "enter the height of the pyramid : ";
    // cin >> x ;
 
    // for( int i = 0 ; i < x  ; i++)    // x-1 for sharp points 
    // {
    //     for(int k = i ; k < x-1 ; k++ )
    //     {
    //         cout << " ";
    //     }
    //     for(int j = 0 ; j < 2*i + 1 ; j ++ )
    //     {
    //         cout <<  "*";
    //     }
    //     cout << "\n";
    // }
   
    // for( int i = 0 ; i < x ; i++)
    // {
    //     for(int k = 0 ; k < i  ; k++ )
    //     {
    //         cout << " ";
    //     }
    //     for(int j = 2*i ; j < 2*x - 1 ; j++ )   // we canalso take temp variable here  and run j loop with the help of it 2 
    //     {
    //         cout <<  "*";
    //     }
      
    //     cout << "\n";
    // }


    



    
// program 12

// *
// **
// ***
// ****
// ***
// **
// *
// int x ;
// cout << "enter the height of the upper triangle :  ";
// cin >> x;

// for(int i = 0 ; i < x; i++)
// {
//     for(int j = 0 ; j <=  i ; j++)
//     {
//         cout <<"*";
//     }
//     cout<< "\n";
//  }
//  for(int i = 0 ; i < x -1 ;i++)
//  {
//     for(int j = i ; j < x -1 ; j++)
//     {
//         cout << "*";
//     }

//     cout <<"\n";
//  }

// }









// program 13 

// 1
// 0 1
// 1 0 1
// 0 1 0 1

// int x;
// int val ;
// cout << "enter the height";
// cin >> x ;

// for(int i = 0 ; i < x ; i++)
// {


//     if(i % 2 == 0)
//         val = 0 ;
//     else
//         val = 1 ;

    
//         for(int j = 0 ; j < i ; j++)
//         {
//             cout << val << " ";
//             val = 1 - val ;
//         }
    
//     cout << "\n";        
// }




}

