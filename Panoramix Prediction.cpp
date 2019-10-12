#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,q=0;
    cin>>m>>n;
            for(int j=m+1;j<=n;j++)
    {
        int val=0;
        for(int i=2;i<j;++i)
        {
            if(j%i==0)
            {
                 val++;
                 break;
            }
        }
        if(val==0)
        {
            q=j;
            break;
        }
    }
        if(q==n)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
}
