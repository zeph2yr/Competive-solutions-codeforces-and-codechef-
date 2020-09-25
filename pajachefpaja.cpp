#include <iostream>

using namespace std;

int main()
{
    int T,X,Y,K,t;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>X>>Y>>K;
        t=(X+Y)/K;
        if(t%2==0)
        {
            cout<<"Chef";
        }
        else if(t%2!=0)
        {
            cout<<"Paja";
        }
    }
    return 0;
}
