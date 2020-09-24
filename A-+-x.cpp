#include <iostream>

using namespace std;

int main()
{
    int a,b,sum=0,sub=0,mul=0;
    cin>>a>>b;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    if(sum>sub&&sum>mul)
    {
        cout<<sum;
    }
    else if(sub>mul)
    {
        cout<<sub;
    }
    else
        cout<<mul;
}
