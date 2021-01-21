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
    int n,d=0;
    cin>>n;
    if(n==1)cout<<"9\n";
    if(n==2)cout<<"98\n";
    if(n==3)cout<<"989\n";
    if(n>3){
      cout<<"989";
      for(int i=0;i<n-3;i++){
        cout<<d;
        d++;
        if(d>9)d=0;
      }
      cout<<endl;
    }
    
  }

  return 0;
}