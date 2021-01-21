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
  int n,k,ans=0,x;
  cin>>n>>k;
  for (int i=0; i<n; i++)
	{
	    scanf("%d", &x);
	    int t=0;
	    while (x)
	    {
	        if ( x%10 == 4 || x%10==7)
                t++;
            x/=10;
	    }
	    if ( t<= k )
            ans++;
	}
	printf("%d", ans);
	return 0;
}