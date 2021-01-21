#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=0;i<n/m;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,m;
  cin>>n>>m;
  if(n%m==0){
    if(n%2==0 && m%2==0){
    for(int i=0;i<m;i++){
      cout<<n/m<<g;
    }
    }
    else
    {
      for(int i=0;i<m;i++){
      cout<<n/m<<g;
    }
    }
    
  }
  else{
    int r=n%m;
    int d=n/m;
    int val1=r*(d+1);
    int val2=n-val1;
    int loo=val2/d;
    
    ff(i,0,loo){
      cout<<d<<g;
    }
    ff(i,0,r){
      cout<<d+1<<g;
    }
  }

  return 0;
}