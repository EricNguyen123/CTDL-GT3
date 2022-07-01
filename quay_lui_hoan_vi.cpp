#include<iostream>
#include<stdbool.h>
using namespace std;
void in(int n, int x[])
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << " ";
}
void xuly(int i, int n, int x[], bool y[])
{
	for(int j = 1; j <= n; j++)
	{
		if(y[j] == true)
		{
			x[i] = j;
			y[j] = false;
			if(i == n)
			{
				in(n, x);
			}
			else
			{
				xuly(i + 1, n, x, y);
			}
			y[j] = true;
		}
		
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *x = new int[n + 1];
		bool *y = new bool[n + 1];
		for(int i = 0; i <= n; i++)
		{
			y[i] = true;
		}
		xuly(1, n, x, y);
		cout << endl;
	}
	return 0;
}
