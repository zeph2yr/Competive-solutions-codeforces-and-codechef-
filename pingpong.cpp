#include <iostream>

using namespace std;

int main()
{
    int x,y,k,t,T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>x>>y>>k;
        t=(x+y)/k;
        if(t%2==0)cout<<"Chef"<<endl;
        else cout<<"Paja"<<endl;
    }
}
