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

void solve(){
    int n;
    cin>>n;
    if(n<=7){cout<<"1\n";return;}
    int x=n%7;
    int ans=n/7;
    if(x==0)cout<<ans<<endl;
    else cout<<ans+1<<endl;
}

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  while(t--){
   solve();   
  }

  return 0;
}