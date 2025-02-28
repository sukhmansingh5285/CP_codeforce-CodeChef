#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 
    int n; cin>>n;
    int leader = 1; n = n-1;
    int ans = 0;

    while(n>0){
      if(n%leader == 0) ans++;
      leader++;
      n--;
    }

    cout<<ans;
}