#include<bits/stdc++.h>
using namespace std;
// recursion is a function calling itsself until it reaches a stopping condition .
// Each function call on stack stores:

// 1. its own n value
// 2. its current position in the code
// 3. the next instruction to run after the recursive call return s .

//  each recursive call creates its own copy of:
// parameters
// local variables
// These stay alive in the stack until that call finishes.

// 🧠 Think of recursion like this:
// Each recursive call is like a new tab opened in your browser.
// Even if you're not using that tab right now,
// it still stores its own:
// URL
// state
// scroll position
// form data
// content


// code - 1
// printing 1 to n elements 

// void print1toN ( int n , int stackposn )
// {
//      if( n == 0 ) return;

//      print1toN(n - 1 , stackposn + 1);
//      cout<< n << " ";
//      cout<<" i am executed"<< endl ;
//      cout<<" i was in stack at posn" << stackposn << endl ;

// }

// int main()
// {
//      print1toN(5 , 0 );
//      return 0 ;
// }



// code - 2
//factorial 
// int fact( int n )
// {
//     if( n == 1 ) return 1 ;
//     return n * fact( n -1 );
// }
// int main()
// {
//     int factorial =   fact(10);
//     cout <<" factorial of 10 is " << factorial ;
//     return 0 ;
// }



//code - 3
// sum of digits
// int sum( int digit)
// {   if( digit == 0 ) return 0;
    
//      return (digit % 10) + sum( digit / 10 );
// }
// int main()
// {
//     int s = sum(12490395);
//     cout << "sum of digits is " << s ;
//     return 0 ;
// }



// code - 4
//reverse a string using recursion 
// void rev_string(int i , string &s)
// {  
//         if( i >= s.length()/2 ) return ;
//         swap( s[i] , s[s.size()-i-1 ]);
//         rev_string( i + 1 , s);
// }
// int main()
// {   
//         string a = "apple fruit a    fuerhv vrehut hevtuhei";
//         cout << a <<endl;
//         rev_string( 0 , a);
//         cout << a ;
// }





// tail vs non tail recursion 
// tail : recursion call is the last statement ,

//non-tail : work happens after recursion call ,




// code - 5
//fibonacci 
// int fib( int n)
// {    
//       cout << "PUSH -> fib(" << n << ") enters the stack\n";
//     if( n == 0 ||n == 1 )
//     {
//         cout << "POP  <- fib(" << n << ") returns " << n << "\n";
//         return n;
//     }
//       return fib(n - 1) + fib(n - 2);
//       cout << "POP  <- fib(" << n << ") returns " << fib(n - 1) + fib(n - 2) << "\n";
//       return fib(n - 1) + fib(n - 2);  
// }
// int main()
// {
//       fib(4);
//       return 0;
// }
