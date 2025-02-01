#include <bits/stdc++.h>
using namespace std;
#define int long long
#ifdef ONPC
#include "mydebug.h"
#endif
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(int &i:v) cin>>i;
    sort(v.begin(), v.end());
    int ind[n+2];
    memset(ind, 0, sizeof ind);
    while(q--){
        int l,r;
        cin>>l>>r;
        ind[l]++;
        ind[r+1]--;
    }
    vector<int> b;
    for(int i=1;i<=n;i++){
        ind[i] += ind[i-1];
        b.push_back(ind[i]);
    }
    sort(b.begin(), b.end());
    int ans = 0;
    for(int i=0;i<n;i++) ans += v[i] * b[i];
    cout<<ans<<"\n";
}