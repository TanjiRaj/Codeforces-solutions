#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=0;i<n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,a,b,n1=0;
  cin>>n;
  while(cin>>a>>b){
    if((a==0 && b==0) && n==0)break;
    for(int i=a;i<=n;i++){
      if(n%a==0 || n%b==0)n1++;
    }
    cout<<n1<<endl;
    
  }

  return 0;
}