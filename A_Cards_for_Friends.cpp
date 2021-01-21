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
    int w,h,n,cnt=1;
    cin>>w>>h>>n;
    if(w%2==1 && h%2==1 && n>1)cout<<"NO\n";
    if(w%2==1 && h%2==1 && n==1)cout<<"YES\n";
    if(w%2==0 && h%2==0){
      while(w%2==0){
        cnt++;
      }
    }
    
  }

  return 0;
}