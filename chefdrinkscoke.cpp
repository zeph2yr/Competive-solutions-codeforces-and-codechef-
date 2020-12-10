#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,k,l,r,j,o,flag=0;
        int c[50]={0},p[1000000];
        int temp=p[0];
        cin>>n>>m>>k>>l>>r;
        for(j=0;j<n;j++)
        {
            cin>>c[j]>>p[j];
        }

        for(j=0;j<n;j++)
        {
            for(o=0;o<m;o++)
            {
                if(c[j]>(k+1))
                {
                    c[j]=c[j]-1;
                }
                else if(c[j]<(k-1))
                {
                    c[j]=c[j]+1;
                }
                else if(c[j]>=(k-1)&&c[j]<=(k+1))
                {
                    c[j]=k;
                }
            }
            if(temp>)
            if(c[j]>=l&&c[j]<=r)
        {
            flag=1;
            break;
        }
        }
        if(flag==1)
        {
            cout<<p[j]<<endl;
        }
        else
        cout<<"-1"<<endl;
     }

}

