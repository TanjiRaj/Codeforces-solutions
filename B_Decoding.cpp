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
  int n;
  string s;
  cin>>n>>s;
  deque<char>d;
  if(n%2==1){
    d.push_back(s[0]);
    for(int i=1;i<n;i++){
    if(i%2==1){
      d.push_front(s[i]);
    }
    else{
      d.push_back(s[i]);
    }
  }
  }
  else{
    d.push_back(s[0]);
    for(int i=1;i<n;i++){
    if(i%2==0){
      d.push_front(s[i]);
    }
    else{
      d.push_back(s[i]);
    }
  }
  }
  for(auto x:d){
    cout<<x;
  }

  return 0;
}