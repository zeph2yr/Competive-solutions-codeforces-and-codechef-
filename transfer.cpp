#include <iostream>

using namespace std;

int main()
{
    int a,b,c,ric=0,rc=0;
    cin>>a>>b>>c;
    rc=a-b;
    ric=c-rc;
    if(c>rc)
    {
        cout<<ric;
    }
    else
        cout<<"0";
}
