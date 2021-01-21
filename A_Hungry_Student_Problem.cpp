#include<bits/stdc++.h>
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(0),
  cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int k; 
    cin >> k;
		while (k >= 0){
			if (k%7 == 0){
				cout << "YES" << endl;
				break;
			}
			k-=3;
		}
		if (k < 0){
			cout << "NO" << endl;
		}
    
  }

  return 0;
}