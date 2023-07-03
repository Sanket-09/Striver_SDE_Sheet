#include <bits/stdc++.h>
using namespace std;

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
 Node(int data, Node *next)
 {
  this->data = data;
  this->next = next;
 }
};

Node *removeKthNode(Node *head, int K)
{
 if (head->next == NULL)
  return NULL;

 Node *temp = head;
 Node *sizer = head;
 int size = 0;

 while (sizer)
 {
  sizer = sizer->next;
  size++;
 }

 if (K == 1)
 {
  for (int i = 0; i < size - K - 1; i++)
  {
   temp = temp->next;
  }
  temp->next = NULL;
  return head;
 }

 for (int i = 0; i < size - K; i++)
 {
  temp = temp->next;
 }

 Node *buffer = temp->next;

 temp->data = buffer->data;

 temp->next = buffer->next;

 return head;
}
