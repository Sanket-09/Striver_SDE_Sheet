#include <bits/stdc++.h>
using namespace std;


/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here

    LinkedListNode<int> *current = head; 
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *next = NULL;

    while(current!=NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;
}