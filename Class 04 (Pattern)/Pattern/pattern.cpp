#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i = n;
	while (i)
	{
		int j = 1;
		while (j <= i)
		{
			cout<<j++ << " ";
		}

		int k = 2 * (n - i);

		while (k)
		{
			cout<<"* ";
			k--;
		}

		while (--j)
		{	
			cout<<j<<" ";
			
		}
		
		cout<<endl;
		i--;
		
	}
	
	
	
}