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
    if((x+y+z)%2==1) cout<<"-1\n";
    else cout<<((x+y+z)-max(0,z-x-y))/2<<"\n";
  }

}