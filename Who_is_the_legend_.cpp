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
  int n,m;
  cin>>n>>m;
  int sum=n+m;
  for(int i=2;i<sum;i++){
    if(sum%i==0){
      cout<<sum<<endl<<"False\n";
      return 0;
    }
  }

cout<<sum<<endl<<"True\n";

  return 0;
}