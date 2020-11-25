#include <iostream>

using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i>=1&&i<=9) ans++;
        if(i>=100&&i<=999) ans++;
        if(i>=10000&&i<=99999) ans++;
    }
    cout<<ans<<endl;
}
