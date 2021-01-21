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
  string a,b,c,d;
  int n;
  cin>>a>>b>>n;
  cout<<a<<g<<b<<endl;
  while(n--){
    cin>>c>>d;
    if(a==c)a=d;
    else b=d;
    cout<<a<<g<<b<<endl;
  }

  return 0;
}