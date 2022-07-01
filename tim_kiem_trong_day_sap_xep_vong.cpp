#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n, k;
		cin >> n;
		cin >> k;
		long *a = new long[n];
		long x;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] == k)
			{
				x = i;
			}
		}
		cout << x + 1 << endl;
	}
	return 0;
}
