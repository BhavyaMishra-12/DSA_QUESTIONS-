#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {3 , 6 , 7 , 5 , 9};
    int n = 5 ;
    int chk;
    int temp ; int j ;
    for( int i = 1  ; i < n ; i++ )
    {   
        temp = arr[i];
         j  = i - 1  ;  
        while( j >= 0 )
        {   
            if( arr[j] > temp )
            {  

               arr[j + 1] = arr[j] ;
               
            }
            else
            {
                  break;
            }
             j-- ;
             arr[j+1] = temp ;
            
        }
    }

    for(int i = 0 ;  i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}
