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
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int ctr = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            ++a[i];
            continue;
        }
        if (a[i] == a[i - 1]) {
            ++ctr;
            ++a[i];
            continue;
        }
        if (a[i] > a[i - 1]) {
            ++ctr;
        }
    }
    cout<<ctr<<endl;
    
  }

  return 0;
}