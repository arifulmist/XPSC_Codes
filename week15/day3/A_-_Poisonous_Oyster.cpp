#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pi pair<ll,ll>
#define nl "\n"
int main()
{
     
    string s1,s2,s3="sick",s4="fine";
    cin>>s1>>s2;

    if(s1==s4 && s2==s4) cout<<4;
    else if(s1==s4) cout<<3;
    else if(s2==s4)  cout<<2;
    else   cout<<1;
}