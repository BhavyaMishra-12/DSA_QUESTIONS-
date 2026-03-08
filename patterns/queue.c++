// here  we are finding the unique elements in queue 
#include<iostream>
#include<queue>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x ;
    cout<<"enter the number of elements in queue ";
    cin>>x;


    queue<int>q;
    for(int i = 0 ; i < x ; i++)
    {
        int z;
        cin >> z;
        q.push(z);
    }
   
    //display the queue elements    
    // queue elements can not be accessed from a loop like this . you can only access one elm
    // for(int i = 0 ; i < x ; i++)
    // {
    //     q.front();
    //     q.pop();
    // }

    set<int>st;

    while(!q.empty())
    {
        st.insert(q.front());
        q.pop();
    }
    

    for(auto it = st.begin() ; it != st.end() ; it++)
    {
        cout<< *it << " ";
    }
     


}