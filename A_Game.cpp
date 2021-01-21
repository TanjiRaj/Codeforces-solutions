#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=1;i<=n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,x,y,z;
  cin>>n;
  //int a[n];
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    //v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(auto a:v){
    cout<<a<<g;
  }
  


  return 0;
}