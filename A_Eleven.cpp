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
  int n;
  cin>>n;
  int f1=1,f2=1;
  f{
    if(f2==i){
      cout<<"O";
      int f3=f1+f2;
      f1=f2;
      f2=f3;
    }
    else cout<<"o";
  }


  return 0;
}