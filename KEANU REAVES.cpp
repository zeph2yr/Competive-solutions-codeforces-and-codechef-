#include<iostream>
#include<string>

using namespace std;

int main()
{
  string x;
  int n,v1=0,v2=0,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      if(x==0)
      {
          v1++;
      }
      else if(x==1)
      {
          v2++;
      }

      while(v1!=v2)
      {
         cnt++;
      }
  }
   cout<<cnt<<"\n";



}
