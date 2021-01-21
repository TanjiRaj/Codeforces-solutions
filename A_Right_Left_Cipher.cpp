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
  int mid,z;
  string s,a;
  cin>>s;
  int l=s.size();
  if(l%2==0)mid=l/2-1;
  else mid=l/2;
  z=mid;
  for(int i=1;i<=l;i++){
    a+=s[z];
    if(i%2==1)z+=i;
    else z-=i;
  }
  cout<<a<<endl;
  


  return 0;
}