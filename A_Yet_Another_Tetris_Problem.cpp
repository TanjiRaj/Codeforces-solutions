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

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    f{
      cin>>a[i];
    }
    string s="YES\n";
    ff(i,1,n){
      if(a[i]%2!=a[i-1]%2)
      s="NO\n";
    }
    cout<<s;
    
  }

  return 0;
}