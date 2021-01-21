#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=1;i<m;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,m,sum=0,rep=0;
  cin>>n>>m;
  int a[m];
  for(int i=1;i<=m;i++){
    cin>>a[i];
  }
  sum+=a[1]-1;
  for(int i=2;i<=m;i++){
    
    if(a[i]>=a[i-1]){
      if(a[i]==a[i-1])continue;
      sum+=(a[i]-a[i-1]);
    }
    else{
      sum+=(n-a[i-1])+a[i];
    }
  }
  cout<<sum;

  return 0;
}