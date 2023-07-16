string isBalanced(string s)
{

 stack<char> st;

 int size = s.size();

 for (int i = 0; i < size; i++)
 {
  char ch = s[i];

  if (ch == '(' || ch == '{' || ch == '[')
   st.push(ch);

  else
  {
   if (!st.empty())
   {
    char top = st.top();

    if ((ch == '}' && top == '{') || (ch == ']' && top == '[') || (ch == ')' && top == '('))
    {
     st.pop();
    }

    else
    {
     return "NO";
    }
   }

   else
   {
    return "NO";
   }
  }
 }

 if (st.empty())
  return "YES";

 else
  return "NO";
}