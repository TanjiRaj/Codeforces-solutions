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
  int n,c=0;
  string s;
  cin>>n>>s;
  for(int i=0;i<n;i++){
    //int x=s[i];
    if(s[i]%2==0)
    c+=(i+1);
  }
  cout<<c;


  return 0;
}