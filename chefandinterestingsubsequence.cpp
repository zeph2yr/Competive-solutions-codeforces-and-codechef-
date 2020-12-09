#include <bits/stdc++.h>

using namespace std;

long long int fact(int s,int t)
{
    if(t>s-t)t=s-t;
    long long temp=1;
    for(int i=1;i<=t;i++)
    {
        temp*=s-t+i;
        temp/=i;
    }
    return temp;
}

int main()
{
    long long int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int sum=0,c=0,m=0,q=0,r=0;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);

        m=arr[k-1];

        if(n==k)
        {
            sum=1;
            cout<<sum<<endl;
        }
        else
        {
            for(int j=k;j<n;j++)
            {
                if(arr[j]==m)
                {
                    q++;
                }
            }
            for(int j=k-1;j>=0;j--)
            {
                if(arr[j]!=m)
                {
                    break;
                }else r++;
            }
                    c=q+r;
                    sum=fact(c,r);
                    cout<<sum<<endl;
        }
    }
}
