#include<iostream>
using namespace std;
int x[100];
int n;
int sum = 0;
int y[100];
void in(int j)
{
	cout << "(";
	for (int i = 1; i <= j; i++)
	{
			cout << x[i];
			if(i < j)
			{
				cout << " ";
			}
	}
	cout << ") ";
}
void gan(int n)
{
	for(int i = 1; i <= n; i++)
	{
		y[i]=i;
	}
}
void xuly(int i, int m)
{
	for (int j = m; j >= 1; j--)
	{
		x[i] = y[j];
		sum += x[i];
		if (sum == n)
		{
			in(i);
		}
		else if(sum < n)
		{
			xuly(i + 1, j);
		}
		sum -= x[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		gan(n);
		xuly(1, n);
		cout << endl;
	}
	
	return 0;
}
