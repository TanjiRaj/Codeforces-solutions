#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=0;i<n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,m;
  cin>>n>>m;
  long double a,b,mini=10000000;
  while(n--){
    cin>>a>>b;
    mini=min(mini,a/b);
  }
  double ans=m*mini;
  printf("%.8lf\n",ans);


  return 0;
}