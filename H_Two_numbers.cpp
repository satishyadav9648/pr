#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin>>a>>b;

  int floor = a/b;
  int ceil = (a+b-1)/b;
  int rounded = (a+b/2)/b;

  cout<<floor<<ceil<<rounded;

  return 0;
}