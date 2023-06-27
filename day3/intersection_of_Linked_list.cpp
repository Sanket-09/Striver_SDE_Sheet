#include <bits/stdc++.h>
using namespace std;



//    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


Node* findIntersection(Node *firstHead, Node *secondHead)
{
    while(firstHead)
    {   
        Node *temp = secondHead;

        while(temp)
        {
            if(firstHead == temp)
            return firstHead;

            temp = temp->next;
        }

        firstHead = firstHead->next;
    }
}
