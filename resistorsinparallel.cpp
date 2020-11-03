#include<bits/stdc++.h>

using namespace std;

int main()
{
    float n,a,r=0.0,sum=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        r=r+1/a;
    }
    sum=1/r;
    cout<<sum;
}
