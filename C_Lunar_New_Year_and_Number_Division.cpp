#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define f  for(int i=0;i<n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  sort(a+1,a+n+1);
  int sum=0,x=n;
  for(int i=1;i<=n/2;i++){
    sum+=((a[i]+a[x])*(a[i]+a[x]));
    x--;
  }
  cout<<sum;

  return 0;
}