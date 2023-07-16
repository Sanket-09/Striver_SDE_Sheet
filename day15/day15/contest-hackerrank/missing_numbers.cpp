vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{

 map<int, int> m1;
 map<int, int> m2;

 vector<int> ans;

 int sizem = arr.size();
 int sizem1 = brr.size();

 for (int i = 0; i < sizem; i++)
 {
  m1[arr[i]]++;
 }

 for (int i = 0; i < sizem1; i++)
 {
  m2[brr[i]]++;
 }

 for (auto it : m2)
 {
  if (m1[it.first] != it.second)
   ans.push_back(it.first);
 }

 return ans;
}