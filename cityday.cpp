#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int c1=0,c2=0,i,j;
    int a[100000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(j=i-x;j<=i+y;j++)
        {
          if(j!=i)
          {
              if(a[j]>a[i])
              {
                ;
              }
          }
        }
        cout<<c1+1;
}
