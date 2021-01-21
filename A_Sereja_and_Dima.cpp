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
  int n;
  cin>>n;
  int a[n];
  ff(i,0,n){
    cin>>a[i];
  }
  int fast=0,last=n-1,ser=0,di=0;
  ff(i,0,n){
    if(i%2==0){
      if(a[fast]>=a[last]){
        ser+=a[fast];
        fast++;
      }
      else{
        ser+=a[last];
        last--;
      }
    }
    else{
      if(a[fast]>=a[last]){
        di+=a[fast];
        fast++;
      }
      else{
        di+=a[last];
        last--;
      }
    }
  }
  cout<<ser<<g<<di;
  return 0;
}