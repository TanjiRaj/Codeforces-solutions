#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f  for(int i=0;i<n;i++)
#define ff(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(a);i>=(b);i--)
#define g " "
#define endl "\n"

bool prime(int n) {for(int i = 2; i * i <= n; ++i) if(n % i == 0) return 0;return 1;}
 
int32_t main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	for(int i = 1; ; ++i) {
		if(!prime(n * i + 1)) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}