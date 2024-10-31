#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define vi vector<long long>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sheshvai return 0;
using namespace std;
int main()
{
  ariful
int n;
cin>>n;
int mx=0;
map<int,int>mp;
for(int i=0;i<n;i++)
{
  int val;
  cin>>val;
  mp[val]++;
  mx=max(mx,mp[val]);
}
cout<<mx<<"\n";

sheshvai
}