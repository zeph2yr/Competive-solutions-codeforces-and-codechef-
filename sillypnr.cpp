#include <iostream>

using namespace std;

int main(void)
{
	int t,n,o1,o2;
    int a[100000],b[100000];
    int s;
	cin>>t;
	while(t--)
	{
	    s=0;
	    o1=0;
	    o2=0;
	   cin>>n;
	   for(int i=0;i<n;i++)
	   {cin>>a[i];
	   s=s+a[i];
	   if(a[i]%2!=0)
	   o1++;}
	   for(int i=0;i<n;i++)
	   {cin>>b[i];
	   s=s+b[i];
	   if(b[i]%2!=0)
	   o2++;}
	   if(o1>=o2)
	   cout<<(s-o1+o2/2);
	   else
	   cout<<(s-o2+o1/2);
	}
	return 0;
}
