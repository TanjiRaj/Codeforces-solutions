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
  int n,s=0,gr=0,l=0;
  cin>>n;
  int a[n];
  f{
    cin>>a[i];
  }
  ff(i,0,n){
    ff(j,i+1,n-1){
      if(a[i]==a[j])s++;
      //else if(a[i]>a[j])gr++;
      else l++;
    }
  }
  cout<<s+l;


  return 0;
}