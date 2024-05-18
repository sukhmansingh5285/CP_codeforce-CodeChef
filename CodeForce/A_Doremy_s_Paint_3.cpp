#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> v[i];
  }
  set<int> s(v.begin(), v.end());

  int a, b, a_count = 0, b_count = 0;
  if (s.size() > 2)
  {
    cout << "No";
  }
  else if (s.size() == 2)
  {
    auto it = s.begin();
    a = *it;
    b = *(++it);

    a_count = count(v.begin(), v.end(), a);
    b_count = count(v.begin(), v.end(), b);

    int diff = abs(a_count - b_count);
    if (diff > 1)
    {
      cout << "No";
    }
    else
    {
      cout << "Yes";
    }
  }
  else
  {
    cout << "Yes";
  }
  cout << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////

// it must only have two different numbers at max, inorder to solve it. And if there are two numbers
// they should not be exceeding each other with more than 1, first one is my implementation with the help of set and the other one is optimal and
// easy solution with the help of map.

void solve()
{
  int n;
  cin >> n;

  map<int, int> mp;

  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    mp[x]++;
  }

  if (mp.size() > 2)
    cout << "No";
  else
  {
    if (abs(mp.begin()->second - mp.end()->second) > 2)
    {
      cout << "No";
    }
    else
    {
      cout << "Yes";
    }
  }
  cout << endl;
}
