#include <iostream>

using namespace std;

int main()
{
    int cnt=0,x,v1,v2;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
    {
        cin>>x;
        if(x==1){v1=i;v2=j;break;}
    }

    while(v1!=2&&v1<2){v1++;cnt++;}
    while(v1!=2&&v1>2){v1--;cnt++;}
    while(v2!=2&&v2<2){v2++;cnt++;}
    while(v2!=2&&v2>2){v2--;cnt++;}
    cout<<cnt;

}
