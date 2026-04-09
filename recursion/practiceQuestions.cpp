// level - 1 basic 
#include<bits/stdc++.h>
using namespace std;

//1. print numbers 

// 1 to n 
// void print1ton( int n )
// {
//     // for 1 to n
//     if( n == 0 ) return ;
//     print1ton( n-1);
//     cout << n << " ";

//     // for n to 1
//     if( n == 0 ) return;
//     cout << n << " ";
//     print1ton( n - 1);

// }
// int main()
// {
//     print1ton(8);
// }




// 2. print even numbers/odd numbers
// void printeven(int r)
// {
//      if( r == 0 ) return;
//      printeven(r - 1);
//      if( r % 2 == 0)
//         cout << r << endl;
// }
// void printodd(int r)
// {
//      if( r == 0 ) return ;
//      printodd( r - 1);
//      if( r %  2 != 0)
//           cout << r << endl;
// }
// int main()
// {
//      printeven(9);
//      printodd(10);
// }


// 3.print array using recursion 
// void printarray(int res[] , int n , int i )
// {     
//      if( i > n - 1 ) return ;
//      cout << res[i] << endl;
//      printarray( res , n , i + 1);
     
//      // WITHOUT PASSING INDEX
//      // void printarray( int arr[] , int n)
//      // {
//           //     if( n == 0 ) return ;
//           //     cout<< arr[0] << endl;
//           //     printarray( arr + 1 , n - 1);
//      // }
    
// }

// void print_array(vector<int>&vec ,  int i)
// {
//      if( i == vec.size() ) 
//          return ;
//      cout << vec[i] << endl ;
//      print_array( vec, i + 1);
// }
// int main()
// {
//        int arr[8]={1,2,3,4,5,6,7,8};
//        vector<int>vec{ 33, 4, 5 ,56,75,34,54};
//        printarray(arr , 8 , 0 );
//        print_array(vec , 0);
// }



// 4. print array reverse
// void reverseprint( vector<int>&vec , int i )
// {
//     if( i == vec.size() ) return ;

//     reverseprint( vec, i + 1);
//     cout << vec[i] << endl;
// }
// int main()
// {
//     vector<int>v{1 ,2, 3, 4, 5};
//     reverseprint(v , 0);
//     return 0;
// }


//5.sum of first N natural numbers
// int sumofn( int n )
// {     
//       if( n == 0) return 0;
//       return n + sumofn(n - 1);
// }
// int main()
// {
//     int sum = sumofn(12);
//     cout<< sum << endl ;
// }


// 6.sum of digits of a number
// int sumofdigit(int n)
// {    
//      if( n == 0 ) return 0;
//      return (n % 10)+ sumofdigit(n / 10);
// }
// int main()
// {
//      sumofdigit(1245);
// }


// 7.count digits in a number
// int countdigits( long long n , int c)
// {
//      if( n == 0 ) return c;           //when we return c in this way it
//                                    //  returns only when the base case hits but
//                                     // it does never comes backup the call stack
//      countdigits( n / 10 , c + 1 );
// }


// int countdigit( long long  n )
// {
//        if( n == 0) return 0;
//        return 1 + countdigit( n / 10 );
//        cout << n << endl;   // dead code  because after the compiler sees return it quickly returns the value .e
// }
// int main()
// {
//     // int count = countdigits(1267887643223 , 0);
//     int count = countdigit(76473465873637853);
//        cout << count << endl;
// }


// 13/12/25
// 8. factorial of n 
//    long long fact( long long n )
//    {    
//         if( n == 1 ) return 1;
//         return n*fact(n - 1);
//    }
//    int main()
//    {
//        long long  f = fact(12);
//        cout << f << endl ;
//    }


// 9.power function
// int power( int a , int b )
// {       
//        if( b == 1 ) return a ; 
//         return a*power( a , b-1);
// }
// int main()
// {
//      int a = power( 4 , 3);
//      cout << a ;
// }


// 10. gcd 
// greatest common divisor
// int gcd( int a , int b )  
// {    

//     if( b == 0 ) return a ;
//     return gcd( b , a % b ) ; 

// }
// int main()
// {
     
//      int cid = gcd( 24 , 32 );
//      cout << cid ;
      
// } 


// 11.check if array is sorted
// bool ifsorted( vector<int>v , int i )
// {    
//      if(v.size() <= 1)   // empty or single element
//              return true;
//      if( i == v.size() - 1) return true ;
//      if( v[i] <= v[i + 1])
//      {
//         return ifsorted(v , i + 1 );
//      }
//      return false ;
// }
// int main()
// {
//     vector<int>v = {1,2,3,4,5};
//     if( ifsorted( v , 0) )
//     {
//         cout<< "Array is sorted";
//     }
//     else
//     {
//         cout<<"array is not sorted";
//     }

//     return 0;
// }



// 12.find maximum and minimum in an array 

// method - 1
// int find_min( vector<int>&arr , int i , int min_v )
// {
//    if( i == arr.size() ) return min_v ; 

//    if( arr[i] <  min_v )
//    {
//        min_v = arr[i];
//    } 
   
//     return  find_min( arr , i + 1 , min_v );
  
// }   




// method - 2 
// int find_min( vector<int>&arr , int i )
// {
//     if( i == arr.size() - 1 ) return arr[i];
    
//     int small = find_min( arr , i + 1);
//     return min(small , arr[i]);

// }
// int main()
// {
//     vector<int> v = { 858945 , 4 , 5 , 7, 6 , 0, 45 , 388 , 56 , 96 , 54 , 59};
//     if( v.empty()) 
//     {
//          cout << "array is empty "; 
//          return 0 ;
//     }
      
//     // int min =  find_min( v , 0 , INT_MAX );
//     int min = find_min( v, 0);
//     cout << min ; 

//   return 0;
// }


// 14. print all the subsets of a array 

// void all_subsets( vector<int>&arr , vector<int>&ans , int i )
// {
//        if ( i == arr.size() ) 
//        {
//           for( int j : ans )
//              cout << j <<  " ";

//           cout<< endl ; return ;
//        }
        
//     //    inclusion 
//        ans.push_back( arr[i]);
//        all_subsets( arr , ans , i + 1);

//     //   exclusion 
//        ans.pop_back();
//        all_subsets( arr , ans , i + 1);

// }
// int main()
// {
//     vector<int> arr = { 1 , 2 , 3 };
//     vector<int>ans;
//     all_subsets( arr, ans , 0);
    

// }



// 15. subset printing by exclusion first 
// #include <bits/stdc++.h>
// using namespace std;

// void printSubsets(vector<int>& arr, int i, vector<int>& temp)
// {
//     // base case
//     if (i == arr.size())
//     {
//         cout << "{ ";
//         for (int x : temp) cout << x << " ";
//         cout << "}\n";
//         return;
//     }

//     // exclude current element
//     printSubsets(arr, i + 1, temp);

//     // include current element
//     temp.push_back(arr[i]);
//     printSubsets(arr, i + 1, temp);
//     temp.pop_back();  // backtrack
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3};
//     vector<int> temp;

//     printSubsets(arr, 0, temp);
// }



// 16. permutation of an array 
// void  find_permutation( vector<vector<int>>&ans , vector<int>&nums , int idx )
// {
//      if( idx == nums.size() )
//      {      
//             ans.push_back( nums);
//             return ; 
//      }
     
//      for( int i = idx ; i < nums.size() ; i++)
//      {
//          swap(nums[i] , nums[idx] );
//          find_permutation( ans , nums , idx  + 1 );
//          swap( nums[i] , nums[idx]);
//      }
    
// }
// int main()
// {
//     vector<int> arr { 1 , 2  , 3};
//     vector< vector<int> > ans ;
//     find_permutation(ans , arr , 0);
//    for( auto &v : ans)
//    {
//        for( int x : v )
//        {
//            cout<< x <<  " ";
//        }
//        cout<< endl ; 
//    }
//    return 0 ; 

// }   





// 17. finding subarray of a given array 

// { 1 , 2 , 3 , 4} 
// void subarrays( int idx , vector< vector<int> >&ans , vector<int>&nums )
// {
//       if( idx == nums.size())
//           return ;
        
//       vector<int>temp;
//       for( int i = idx ; i < nums.size() ; i++)
//       {
//           temp.push_back( nums[i]);
//           ans.push_back(temp);
//       }
//       subarrays( idx + 1 , ans , nums);

// }
// int main()
// {
//      vector<int>nums = { 1 , 2 , 3};
//      vector< vector<int> > ans;
//      subarrays( 0 , ans , nums );

//      for(auto &v : ans)
//      {
//          for( int i : v)
//          {
//             cout<< i << " ";
//          }
//          cout<< endl ;
//      }

// }


// method - 2 pure recursion method 
// void printSubarrays(int start, int end, vector<int>& nums)
// {
//     // base case: when start reaches end of array
//     if (start == nums.size())
//         return;

//     // if end has crossed array size, move start forward
//     if (end == nums.size())
//     {
//         printSubarrays(start + 1, start + 1, nums);
//         return;
//     }

//     // print subarray from start to end
//     for (int i = start; i <= end; i++)
//         cout << nums[i] << " ";
//     cout << endl;

//     // extend the end
//     printSubarrays(start, end + 1, nums);
// }

// int main()
// {
//     vector<int> nums = {1, 2, 3};
//     printSubarrays(0, 0, nums);
// }



// 18. print all the  ways to select k combinations of the array 
// void print_kcombinations( int k , int idx , vector<int>&nums , vector<int>&ans )
// {
//      if( idx == nums.size()  )
//      {  
//         if( ans.size() == k)
//         {
//           for( int i : ans )
//           cout << i << " ";

//           cout<< endl;
//         }
//           return ;   // we return as soon as we get the k elements in the array .
//      }
// //  we return to the recursiont tree when it becomes impossible to fill k elements with the remaining elements .
       
//     if( ans.size() + ( nums.size() - idx ) < k ) return ;    

// //      //inclusion
//      ans.push_back( nums[idx]);
//      print_kcombinations( k , idx + 1 , nums , ans );

// //     //  exclusion 
//     ans.pop_back();
//     print_kcombinations( k , idx + 1 , nums , ans);

// }

// int main()
// {
//       vector<int>v = { 1 ,2 , 3, 4 };
//       vector<int>ans ;
//       print_kcombinations( 1 , 0 , v , ans);
// }



// 19.N Queens 
//  this solution gives n! time complexity and it can be optimised using bitmasking technique

// bool issafe( int row , int col , vector<vector<char>>&v , int n )
// {
//     //  col 
//     for( int i = 0 ;  i < row ; i++ )
//     {
//         if( v[i][col] == 'Q') return false;
//     }
//     // left diagonal
//     for( int i = row - 1 , j = col - 1 ; i >= 0 && j >= 0 ; i-- , j--)
//     {
//           if( v[i][j] == 'Q') return false;
//     }
//     // for right diagonal 
//     for( int i = row - 1 , j = col + 1 ; i >= 0 && j < n ; i-- , j++)
//     {
//           if( v[i][j] == 'Q') return false;
//     }
//    return true ;
// }
// void solve( int row , vector<vector<char>>&v , int n )
// {    
//      if( row == n ) 
//      {  
//         for( int i  = 0 ; i < n ; i++ )
//         {
//             for(int j = 0 ; j < n ; j++ )
//             {
//                  cout<< v[i][j] << " ";
//             }
//             cout<<endl;
//         }
//         cout<<"-----------------------------"<<endl;
//         return; 

//      }
//     //   for col
//      for( int i = 0 ; i < n ; i++)
//      {
//             if( issafe( row , i , v , n ))
//             {
//                  v[row][i] = 'Q';
//                  solve( row + 1 , v , n);
//                  v[row][i] = '.';
//             }
//      }

// }
// void nqueen( int n)
// {
//      vector<vector<char>>vec( n , vector<char>( n , '.'));
//      solve( 0 , vec , n );
// }
// int main()
// {
//      nqueen(4);
// }



// 20. of u want to check if a path exist from (  0 , 0 ) of matrix to the end of ( n - 1 , n - 1 ) matrix 
// given that movements are allowed only up , down left , right 
// with the condition of hamiltonian path 
//  possible only of we have one odd in ( m * n )


// 21.findind all possibe paths in a matrix 
// void fun( int row , int col , vector<vector<int>>&v , string res , int n )
// {      
       
//       //  base case 
//        if( row < 0 || col < 0 || row >= n || col >= n )
//        {
//              return;
//        }
//       //  
//        if( v[row][col] == 1 ) return;
//       //  base case 2  
//        if( row == n - 1 && col == n - 1 )
//        {
//             cout << res << endl ;
//             return;
//        }
   
//        v[row][col] = 1 ;     
            
//        fun( row , col + 1 , v , res + 'R' ,n);  
//        fun( row + 1 , col , v , res + 'D' , n);
//        fun( row , col - 1 , v, res + 'L' , n);
//        fun( row - 1 , col , v , res + 'U' , n);
//     //    backtrack
//        v[row][col] = 0 ;   
       
// }
// int main()
// {  
//     int n = 4 ;
//     vector<vector<int>>v(  n , vector<int>( n , 0 ));
//     fun( 0 , 0 , v, "", n );
// }


// 22. rat in a maze
// void fun( int row , int col , vector<vector<int>>&v  ,string res , int n , vector<string>&vec )
// {
//       if( row < 0 || col < 0 || row >= n || col >= n || v[row][col] == 0 || v[row][col] == 9 )
//       {
//              return ;
//       }
//       if( row == n-1 && col == n - 1)
//       { 
//             vec.push_back( res );
//             return ;
//       }


//       v[row][col] =  9 ;
//       fun( row , col + 1 , v , res + 'R' , n , vec);
//       fun( row + 1 , col , v , res + 'D' , n , vec);
//       fun( row - 1 , col , v , res + 'U' , n , vec);
//       fun( row , col - 1, v , res + 'L' , n , vec);

//       v[row][col] = 1 ;


// }
// int main()
// {
//        vector<vector<int>>maze{ {1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1 } };
//        vector<string>vec ;
//        fun(0 , 0 , maze , "" , 4 , vec);

//        for( auto i : vec)
//        {
//             cout << i << endl;
//        }
//        return 0 ;
// }


// 23. finding combinations of choosing r out of c positions/possibilities 
// int combination ( int n , int r)
// {
//       if( r > n - r) r = n - r ; //choose the smaller number 
//        long long res = 1;
//       for( int i = 1 ; i <= r ; i++)
//       {
//            res = res*( n - r + i ) / i ;
//       }
//       return res;

// }
// int main()
// {
//      cout << combination( 2 , 8 );
// }


