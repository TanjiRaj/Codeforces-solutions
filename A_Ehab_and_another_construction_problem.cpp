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
  int x;
  cin>>x;
  if(x==1){
    cout<<"-1";
    return 0;
  }
  else if(x==2 || x==3){
    cout<<"2"<<g<<"2";
    return 0;
  }
  else
  {
    while(1){
    if(x%2==0){
      cout<<x<<g<<x/2;
      break;
    }
    else if(x==1){cout<<"-1";break;}
    else x--;

  }
  }
  

  return 0;
}