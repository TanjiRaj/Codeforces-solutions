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
  int n,m,sum=0,c=0;
  cin>>n>>m;
  int a[n];
  f{
    cin>>a[i];
  }
  sort(a,a+n,greater<>());
  f{
    sum+=a[i];
    c++;
    if(sum>=m){
      cout<<c;
      break;
    }
  }

  return 0;
}