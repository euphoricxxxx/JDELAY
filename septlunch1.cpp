#include<iostream>
using namespace std;
int main()
{
	int t, n , r, s, delay=0;
	cin>>t;
	if(t>=1 && n<=100)
	{
		while(t--)
		{
			cin>>n;
			cout<<endl;
			if(n>=1 && n<=100)
			{
				delay=0;
				while(n--)
				{
					cin>>s>>r;
					cout<<endl;
					if((r-s)>5)
						delay++;
				}
				cout<<delay;
				cout<<endl;
			}
		}
	}
	return 0;
}
