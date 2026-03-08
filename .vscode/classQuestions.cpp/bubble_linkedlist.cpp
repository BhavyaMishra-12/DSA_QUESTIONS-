#include<bits/stdc++.h>
using namespace std;

// created a linked list
struct Node
{
    int data ;
    Node*next;
    Node(int data)
    {
        data = data ;                           
        next = nullptr ;
    }
};


int main()
{
    Node *head = new Node(10);
    head -> next = new Node(30);
    head -> next ->next = new Node(60);
    head -> next -> next -> next = new Node(90);
    head -> next -> next -> next ->next = new Node(30);

}