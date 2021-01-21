#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=0;i<n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int n,k,c,count=0;
  cin>>n;
  vector<int>v;
  while(n--){
    int a,b;
    cin>>a>>b;
    v.push_back(a);
    v.push_back(b);
  }
  cin>>k;
  if(n==1)cout<<"1";
  else
  {
     int l=v.size();
  for(auto i=v.begin();i!=v.end();i+=2){
    count++;
    if(*i<=k){
      if(*(i+1)>=k){
        c=count-1;break;
      }
    }
  }
  cout<<(l/2)-c;
  }
  

  return 0;
}