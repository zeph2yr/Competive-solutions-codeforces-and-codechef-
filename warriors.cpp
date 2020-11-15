#include <iostream>

using namespace std;

int main()
{
    int t,n,q;
    long long int a[1000000],b[1000000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>q;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<q;k++)
        {
            cin>>b[k];
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(b[k]>a[j])
                {
                    b[k]=2*(b[k]-a[j]);
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}
