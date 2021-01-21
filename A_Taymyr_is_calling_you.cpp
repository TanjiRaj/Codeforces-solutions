#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=1;i<=n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,m,z,c=0;
  cin>>n>>m>>z;
  if(n==1){
    for(int i=z;i>=1;i--){
    if(i%m==0)c++;
  }
  //cout<<c;
  }
  else {
    for(int i=z;i>=1;i--){
    if(i%m==0){
      if(i%n==0)c++;
    }
  }
  //cout<<c;
  }
  cout<<c;

  return 0;
}