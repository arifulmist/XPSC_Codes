#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int x,y,z;
        cin>>x>>y>>z;
        long long xx=x*y,yy=z*24*60;
        if(xx<=yy) cout<<"YES\n";
        else cout<<"NO\n";
     }
}