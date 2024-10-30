#include<bits/stdc++.h>
#define ub upper_bound
#define vi vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long 
#define sheshvai return 0;
using namespace std;
int main()
{  
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 set<string>tp;
 set<pair<int,string>>st;
   string x; 
    ll n;
    cin>>n;
for(int i=0;i<n;i++)
{
   
   cin>>x;
   st.insert(make_pair(i,x));
}

for(auto i=st.rbegin();i!=st.rend();i++)
{
if(tp.find(i->second)==tp.end())
{
  tp.insert(i->second);
  cout<<i->second<<'\n';
}
}

   sheshvai
}
 	 	 			    	 	 			  					 	