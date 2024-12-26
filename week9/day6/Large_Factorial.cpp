#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;
void fact()
{
    ll n;
    cin>>n;
    ll ans=1;
    //if(n==1 || n==0) return 1;
     for (int i = 1; i <= n; i++)
    {
        ans = (1LL * ans % MOD * i % MOD) % MOD;
    }
    cout<<ans<<"\n";
    
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    fact();
	}
	

}
