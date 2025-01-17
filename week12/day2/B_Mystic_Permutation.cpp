#include <bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<long long>
#define all(x) x.begin(), x.end()
#define forn(i, n) for (int i = 1; i<=int(n); i++)
#define pp(ans) cout << (ans) << "\n"
#define nl "\n"
#define shesh return 0;

using namespace std;

ll n;
 vi ind(1001), ans(1001),p(10001);

int main() {
    ariful
    ll t;
    cin >> t;

    while (t--) {
    
        cin >> n;
       
        for(ll i=1;i<=n;i++) {
            cin >> p[i];
            ind[i] = i;
        }

        if (n == 1) {
            pp(-1);
            continue;
        }

       for(ll i=1;i<n;i++)
       {
         if(p[i]==ind[i]) swap(ind[i],ind[i+1]);

       }
       if(p[n]==ind[n]) swap(ind[n-1],ind[n]);
        forn(i, n) {
            cout << ind[i] << " ";
        }
        cout << nl;
    }

    shesh
}
