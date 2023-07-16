bool helper(vector<string> passwords, string loginAttempt, unordered_map<string, int> mp, vector<int> &dp, vector<string> &ans,
            int id, int n)
{
 if (concatVector(ans) == loginAttempt)
 {
  return true;
 }
 if (id >= n)
 {
  return false;
 }
 if (dp[id] != -1)
 {
  return dp[id];
 }
 for (int i = id; i < n; i++)
 {
  string s = loginAttempt.substr(id, i - id + 1);
  if (mp.find(s) != mp.end())
  {
   ans.push_back(s);
   if (helper(passwords, loginAttempt, mp, dp, ans, i + 1, n))
   {
    return true;
   }
   else
   {
    ans.pop_back();
   }
  }
 }
 return dp[id] = false;
}

string passwordCracker(vector<string> passwords, string loginAttempt)
{
 int n = loginAttempt.size();
 unordered_map<string, int> mp;
 vector<string> res;
 vector<int> dp(n + 1, -1);
 for (int i = 0; i < (int)passwords.size(); i++)
  mp[passwords[i]] = i;
 if (helper(passwords, loginAttempt, mp, dp, res, 0, n))
 {
  string temp = "";
  for (string s : res)
   temp += s + " ";
  temp.pop_back();
  return temp;
 }
 return "WRONG PASSWORD";
}
