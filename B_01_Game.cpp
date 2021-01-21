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
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int l=s.size();
    int z=0,o=0;
    ff(i,0,l){
      if(s[i]=='0')o++;
       else z++;
    }
   int mini=min(o,z);
   if(mini%2)cout<<"DA\n";
   else cout<<"NET\n";
  }
  


  return 0;
}