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
  int n,d,sum=0,ans=0;
  cin>>n>>d;
  while(d--){
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s.find('0') != string::npos){
        ++sum;
        ans=max(sum,ans);
        break;
      }
      else{
        sum=0;
      }
    }

  }
  cout<<ans;

  return 0;
}