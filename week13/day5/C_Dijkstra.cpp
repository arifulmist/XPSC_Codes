#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+5;
vector<pair<ll,ll>>adj[N];
ll dis[N],par[N];
class cmp{
    public:
    bool operator()(pair<ll,ll>a,pair<ll,ll>b)
    {
        return a.second>b.second;
    }
};
void dijkstra(ll src)
{
   
    dis[src]=0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp>pp;
    pp.push({src,0});
    while(!pp.empty())
    {
        auto pr=pp.top();
        pp.pop();
        ll parn=pr.first;
        ll parw=pr.second;
        for(auto ch:adj[parn])
        {
            ll childn=ch.first;
            ll childcost=ch.second;
            if(dis[childn]>childcost+parw)
            {
                dis[childn]=childcost+parw;
                par[childn]=parn;
                pp.push({childn,dis[childn]});
            }
        }
    }
}
int main()
{
ll n,e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
         adj[b].push_back({a, c});
        
    }
     for(ll i=1;i<=n;i++)
    {
        dis[i]=LLONG_MAX;
        par[i]=-1;
    }
    dijkstra(1);
    if(dis[n]==LLONG_MAX) cout<<-1<<"\n";
    else 
    {
 vector<ll> p;
            ll xx = n; 
            while (xx != -1) {
                p.push_back(xx);
                xx = par[xx];
            }
            reverse(p.begin(), p.end());
            for (auto j : p) {
                cout << j << " ";
            }
     
}
    }
   