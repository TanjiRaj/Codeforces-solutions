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
   int n,d,sum=201,x,flag=1;
    cin>>n>>d;
    int a[n];
    f{
      cin>>a[i];
      if(a[i]>d)flag=2;
    }
    if(flag==1){cout<<"YES\n";return;}
    if(n==1 && a[0]>d){cout<<"NO\n";return;}
    if(n==1 && a[0]<d){cout<<"YES\n";return;}
    else{
      ff(i,0,n){
      ff(j,i+1,n){
        x=a[i]+a[j];
        sum=min(sum,x);
      }
    }
    if(sum<=d)cout<<"YES\n";
    else cout<<"NO\n";
    }
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