#include <iostream>
using namespace std;

int main() {
	int T, N, i;
	cin>>T;
	while(T--)
	{
	cin>>N;
    int a=0, b=0, c=0, d=0;
	string S, R;
	    cin>>S;
	    cin>>R;
	for(i=0; i<N; i++)
	{
	    if(S[i]=='1')
	    a=a+1;
	    else
	    b=b+1;
	    if(R[i]=='1')
	    c=c+1;
	    else
	    d=d+1;

	}
	if(a==c && b==d)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
}
