#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long *a = new long long[n];
		long long *b = new long long[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		int d = 0;
		for(int i = 0; i < n - 1; i++)
		{
			if(a[i] == b[n - 1] && a[i + 1] == b[0])
			{
				d = 1;
				cout << i + 1 << endl;
				break;
			}
			
		}
	    if(d == 0)
	    {
	    	cout << 0 << endl;
		}
	}
	return 0;
}
