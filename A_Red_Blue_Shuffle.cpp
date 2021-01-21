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
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    int rr=0,bb=0;

    for(int i=0;i<n;i++){
      
      if(s1[i]>s2[i])rr++;
      else if(s1[i]<s2[i])bb++;
      
    }
    
    if(rr==bb)cout<<"EQUAL\n";
    else if(rr>bb)cout<<"RED\n";
    else if(rr<bb)cout<<"BLUE\n";
   
    
  }

  return 0;
}