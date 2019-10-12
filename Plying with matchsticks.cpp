#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int n;
    string a,b;
    string sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        int x=0,y=0;
        for(int k=0;k<a.length();k++)
        {
           x=x*10+a[k]-'0';
        }
        for(int k=0;k<b.length();k++)
        {
           y=y*10+b[k]-'0';
        }
        sum = to_string(x+y);
        int count=0,q=0;
        for(int j=0;j<sum.length();j++)
        {
            if(sum[j]=='0')
            {
                count=5;
            }
            else if(sum[j]=='1')
            {
                count=2;
            }
            else if(sum[j]=='2')
            {
                count=5;
            }
            else if(sum[j]=='3')
            {
                count=5;
            }
            else if(sum[j]=='4')
            {
                count=4;
            }
            else if(sum[j]=='5')
            {
                count=5;
            }
            else if(sum[j]=='6')
            {
                count=6;
            }
            else if(sum[j]=='7')
            {
                count=3;
            }
            else if(sum[j]=='8')
            {
                count=7;
            }
            else if(sum[j]=='9')
            {
                count=6;
            }
            cout<<sum<<" ";
            q+=count;
        }
        //cout<<q/2;

    }
}
