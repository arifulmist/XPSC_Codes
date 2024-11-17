#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    
	   cin>>x>>y;
	    if((x+y)%3==0) 
	    {
	        cout<<"0\n";
	    }
	    else
	    {
	        int c=x%3;
	        int b=y%3;
	        cout<<c<<endl;
	    }
	   
	}
}