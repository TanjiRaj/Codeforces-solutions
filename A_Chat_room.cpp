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
  char hello[]="hello", s[110], flag=0, cur=0, i;
    cin>>s;
    for (i=0; i<strlen (s) && flag==0; i++)
    {
        if (s[i]==hello[cur])
        {
            cur++;
        }
        if (cur==5) flag=1;
    }
    if (flag) cout<<"YES";
    else cout<<"NO";

  return 0;
}