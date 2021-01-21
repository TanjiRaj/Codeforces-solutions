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
    int n,flag=1;
    string s,a={};
    cin>>n>>s;
    a+="1";
    for(int i=1;i<n;i++){
      if('1'+s[i]!=s[i-1]+a[i-1]){
        a+='1';
      }
      else a+='0';
    }
    cout<<a<<endl;
    
  }

  return 0;
}