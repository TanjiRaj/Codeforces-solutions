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
  int n,a,b,sum=0;
  cin>>n;
  int di[n-1];
  for(int i=1;i<n;i++){
    cin>>di[i];
  }
  cin>>a>>b;
  if(a==1){
    for(int i=1;i<b;i++){
      sum=di[i]+sum;
    }
  }
  else {
    for(int i=a;i<b;i++){
      sum=di[i]+sum;
    }
  }
  
  cout<<sum;


  return 0;
}