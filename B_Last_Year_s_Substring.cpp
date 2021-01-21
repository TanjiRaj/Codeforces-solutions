#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
//#define f  for(int i=0;i<n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    string str,s="2020";
		int n,p=0;
		cin>>n>>str;
		while (p<4&&str[p]==s[p]){
			p++;
		}
		while (p<4&&str[n-4+p]==s[p]){
			p++;
		}
		if (p>=4){
			cout<<"YES"<<'\n';
		}
		else {
			cout<<"NO"<<'\n';
		}
  }

  return 0;
}