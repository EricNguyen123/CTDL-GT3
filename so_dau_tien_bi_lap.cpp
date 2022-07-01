#include<iostream>
#include<map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long *a = new long[n];
		map <long, long> x;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			x[a[i]]++;
		}
		int d = 0;
		for(int i = 0; i < n; i++)
		{
			if(x[a[i]] > 1)
			{
				d = 1;
				cout << a[i] << endl;
				break;
			}
		}
		if(d == 0)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
