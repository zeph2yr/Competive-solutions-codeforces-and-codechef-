#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,cnt=0;
    int arr[50001]={0};
    cin>>n1>>n2>>n3;
    int t=n1+n2+n3;
    for(int i=0;i<t;i++)
    {
        cin>>n1;
        arr[n1]+=1;
    }
    for(int i=0;i<50001;i++) if(arr[i]>=2)cnt++;

    cout<<cnt<<endl;

    for(int i=0;i<50001;i++) if(arr[i]>=2) cout<<i<<" ";

}
