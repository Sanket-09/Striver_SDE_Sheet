#include <bits/stdc++.h>
using namespace std;


    //Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };



Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dummy = new Node<int>(0);
    Node<int>* h = dummy;

    while(first!=NULL && second!=NULL)
    {
        
    if(first->data <= second->data)
    {
        Node<int>* temp = new Node<int>(first->data);
        h->next = temp;
        first = first->next;
        h = h->next;
    }
    
    else
    {
    Node<int>* temp = new Node<int>(second->data);
    h->next = temp;
    second = second->next;
    h = h->next;
    }
    }
    
    if(first==NULL)
    {
        h->next = second;
    }

    if(second==NULL)
    {
        h->next = first;
    }

    return dummy->next;
    
    
}
