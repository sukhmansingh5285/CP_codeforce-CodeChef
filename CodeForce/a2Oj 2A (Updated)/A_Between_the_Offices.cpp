#include <bits/stdc++.h>
using namespace std;

void solve()
{

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin>>n;
  string str; cin>>str;
  
  int sf = 0, fs = 0;

  for(int i=0;i<n-1;++i){
    if(str[i] == 'S' && str[i+1] == 'F') sf++;
    if(str[i] == 'F' && str[i+1] == 'S') fs++;
  }

  if(sf>fs) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}