#include <iostream>

using namespace std;

int main()
{
    long long int s
    int cnt=0,m=0,t=0;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        m=s%10;
        s/=10;
        t++;
        if(m==4||m==7)
        {
            cnt++;
        }
    }
    if(cnt==t)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
