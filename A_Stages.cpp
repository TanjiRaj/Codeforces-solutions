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
  int n,k,sum=0;
  string s,ans;
  cin>>n>>k>>s;
  sort(s.begin(),s.end());
  ans+=s[0];
  ff(i,1,50){
    if(s[i]>=s[i-1]+2)continue;
    ans+=s[i];
    if(i==k-1)break;
  }
  ff(i,0,k){
    sum+=(int)s[i]-96;
  }
  cout<<sum;

  return 0;
}