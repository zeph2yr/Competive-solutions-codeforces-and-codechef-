#include <iostream>

using namespace std;

int main()
{
    int n,d,e;
    cin>>n;
    cin>>d;
    cin>>e;
    int arrd[]={1,2,5,10,20,50,100};
    int arre[]={5,10,20,50,100,200};
    for(int i=0;i<7;i++)
    {
        sumd=d*arrd[i];
        sume=e*arre[i];
        sum=sumd+sume;
        while(sum<n)
        {
            total+=sum;

        }
    }
}
