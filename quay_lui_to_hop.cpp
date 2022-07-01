#include<iostream>
using namespace std;
void in(int k, int x[])
{
	for(int i = 1; i <= k; i++)
	{
		cout << x[i];
	}
	cout << " ";
}
void xuly(int i, int n, int k, int x[])
{
	for(int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if(i == k)
		{
			in(k, x);
		}
		else
		{
			xuly(i + 1, n, k, x);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int *x = new int[k + 1];
		x[0] = 0;
		xuly(1, n, k, x);
		cout << endl;
	}
	return 0;
}
