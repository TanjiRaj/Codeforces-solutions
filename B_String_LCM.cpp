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
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    int z=n*m/__gcd(n,m);
    string a,b;
    ff(i,0,z){
      a.pb(s[i%n]);
      b.pb(t[i%m]);
    }
    if(a==b)cout<<a<<endl;
    else cout<<"-1\n";
  }

  return 0;
}