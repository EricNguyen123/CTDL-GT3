#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int max = 0;
		for(int i = n - 1; i >= 1; i--)
		{
			int j = 0;
			while(j + i < n)
			{
				if(a[j] < a[j + i])
				{
					max = i;
					break;
				}
				j++;
			}
			if(max != 0)
			{
				break;
			}
		}
		if(max == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << max << endl;
		}
	}
	return 0;
}
