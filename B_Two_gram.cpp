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
  int n;
  string s,ans;
  cin>>n>>s;
  //int l=s.length();
  int res=0;
  ff(i,0,n-1){
    int cur=0;
    ff(j,0,n-1){
      if(s[j]==s[i] && s[j+1]==s[i+1])cur++;
      if(res<cur){
        res=cur;
        ans=string(1,s[j])+string(1,s[j+1]);
      }
    }
  }
  cout<<ans;

  return 0;
}