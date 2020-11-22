#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int count=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        s[i]-'0';
        if(s[i]==s[i+1])
        {
            count='1';
            break;
        }
    }
    if(count=='1')
    {
        cout<<"Bad";
    }
    else cout<<"Good";
}
