#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,b,g,ans=0;
	cin>>b>>g>>n;
	if(n<=b && n<=g)
    {
        ans=n+1;
    }
	else if(n>=b && n<=g)
    {
        ans=b+1;
    }
	else if(n<=b && n>=g)
    {
        ans=g+1;
    }
	else
    {
        ans=b+g-n+1;
    }

	cout<<ans;
}
