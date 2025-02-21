/*
  __  __ ____       _    ____  ___ _____ _   _ _       ___ ____  _        _    __  __
 |  \/  |  _ \     / \  |  _ \|_ _|  ___| | | | |     |_ _/ ___|| |      / \  |  \/  |
 | |\/| | | | |   / _ \ | |_) || || |_  | | | | |      | |\___ \| |     / _ \ | |\/| |
 | |  | | |_| |  / ___ \|  _ < | ||  _| | |_| | |___   | | ___) | |___ / ___ \| |  | |
 |_|  |_|____/  /_/   \_\_| \_\___|_|    \___/|_____| |___|____/|_____/_/   \_\_|  |_|

*/
#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define vi vector<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
#define srev(st) reverse(st.rbegin(),st.rend())
#define  in_range(i,x,y)  for(int i=x;i<=y;i++)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define  in_range_back(i,x,y)  for(int i=y;i>=x;i--)
#define p(ans) cout<<(ans)<<"\n"
#define TT ll t; cin >> t; for (ll tt = 1; tt <= t; tt++)
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
void solve()
{
    string s,ss;
    cin>>s>>ss;
     if(s[0]==ss[0])
     {
      YES;
      cout<<s[0]<<"*"<<nl;
      
     }
     else if(s.back()==ss.back())
     {
      YES;
      cout<<"*"<<s.back()<<nl;
      
     }
     else 
     {
      ll n=s.size();
      ll m=ss.size();
      string rs;

      for(ll i=0;i<=n-2;i++)
      {
          for(ll j=0;j<=m-2;j++)
          {
             if(s[i]==ss[j]&& s[i+1]==ss[j+1])
             {
              YES;
              cout<<"*"<<s[i]<<s[i+1]<<"*\n";
              return;

             }
          
          }
      }
          NO;
      }
     

}
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    cin >> t;
    while (t--)
    {
     solve();
      }
    shesh
}
