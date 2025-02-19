#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	bool flag=false;
	for(int i=1;i<=10;i++)
	{
	    if(i*m+n>=100) 
	    {
	        flag=true;
	        break;
	    }
	}
	(flag)?cout<<"YES\n":cout<<"NO\n";

}
