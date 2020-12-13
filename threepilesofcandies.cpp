#include <iostream>

using namespace std;

int main()
{
    int q;
    long long int x,sum,m=0;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>x;
            sum+=x;
        }
        m=sum%2;
        if(m==0)
        {
            cout<<sum/2<<endl;
        }
        else
            cout<<(sum-1)/2<<endl;
    }
}
