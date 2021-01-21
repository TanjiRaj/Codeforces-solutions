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
    int n,x,sum=0,mx=0,cnt=0;
    cin>>n>>x;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    for(int i=0;i<n;i++){
      mx+=a[i]/x;
      if(a[i]%x==1)mx++;
    }
    cout<<(sum/x)+(bool)(sum%x)<<g<<mx<<endl;
    
    
  }

  return 0;
}