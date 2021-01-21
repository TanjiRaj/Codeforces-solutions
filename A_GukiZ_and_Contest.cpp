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
  int n;
  cin>>n;
  int a[n],sum[n]={};
  f{
    cin>>a[i];
  }
  ff(i,0,n){
    int x=1;
    ff(j,0,n){
      if(a[j]>a[i]){
        x++;
      }
    }
    cout<<x<<g;
  }

  return 0;
}