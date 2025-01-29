#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pi pair<ll,ll>
#define nl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll cnt=0;

        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='S') cnt++;
        }
        if(cnt>=k) cout<<n<<"\n";
        else cout<<n+k-cnt-1<<"\n";

    } 
}