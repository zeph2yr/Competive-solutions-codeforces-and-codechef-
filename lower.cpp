#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>=a[j+1])
        {
            cnt++;
        }else cnt=0;
        if(cnt>count)
        {
            count=cnt;
        }
    }
    cout<<cnt<<endl;
}
