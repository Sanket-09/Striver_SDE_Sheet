using namespace std;
#include <bits/stdc++.h>

class Stack
{
 // Define the data members.
 queue<int> q1, q2;
 int size;

public:
 Stack()
 {

  size = 0;
  // Implement the Constructor.
 }

 /*----------------- Public Functions of Stack -----------------*/

 int getSize()
 {
  // Implement the getSize() function.
  return size;
 }

 bool isEmpty()
 {

  if (size == 0)
   return true;

  else
   return false;
  // Implement the isEmpty() function.
 }

 void push(int element)
 {

  q2.push(element);

  while (!q1.empty())
  {
   int val = q1.front();
   q1.pop();
   q2.push(val);
  }

  swap(q1, q2);
  size++;
  // Implement the push() function.
 }

 int pop()
 {

  if (!q1.empty())
  {
   int val = q1.front();
   q1.pop();

   size--;
   return val;
  }

  else
   return -1;
  // Implement the pop() function.
 }

 int top()
 {
  if (!q1.empty())
   return q1.front();

  else
   return -1;
  // Implement the top() function.
 }
};