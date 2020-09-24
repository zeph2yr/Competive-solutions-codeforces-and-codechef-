#include<iostream>

using namespace std;

int main()
{
    int t,sum=0,c,f,p,b,h,r=0,a=0,q=0;
    cin>>t;
    if(t<=100)
    {
    for(int i=0;i<t;i++)
    {
        cin>>b>>p>>f;
        cin>>h>>c;
        if(b<=100&&p<=100&&f<=100&&h<=100&&c<=100)
        {
        sum=0;
        r=0;q=0;a=0;
        r=b/2;
        q=p+f;
        if(q>r)
        {
           a=r-f;
           if(c>h)
           {
              sum=(h*a)+(c*f);
           }
           else
            sum=0;
        }
        else
        {
            sum=(h*p)+(f*c);
        }
        cout<<sum<<endl;
        }
    }
    }
}
