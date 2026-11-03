#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n , m;
  cin>>n>>m;

  int cnt = 0;
  int limit = sqrt(n);

  int b = 0;
  for(int a = 0; a<=limit; a++){
    b = n - (a*a);

    if(a+(b*b) == m){
      cnt++;
    }
  }
  cout<<cnt<<endl;

  return 0;
}