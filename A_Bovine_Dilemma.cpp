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

main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi v(n);
    f{
      cin>>v[i];
    }
    set<int>s;
    ff(i,0,n){
      ff(j,i+1,n){
        s.insert(v[j]-v[i]);
      } 
    }
    cout<<s.size()<<endl;
    
  }

  return 0;
}