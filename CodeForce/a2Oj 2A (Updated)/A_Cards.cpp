#include <bits/stdc++.h>
using namespace std;

void solve()
{

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  string str;
  cin>>str;

  unordered_map<char,int>um;

  for(auto &c: str){
    um[c]++;
  }

  

  // int tc;
  // cin >> tc;
  // while (tc--)
  // {
  //   solve();
  // }
}