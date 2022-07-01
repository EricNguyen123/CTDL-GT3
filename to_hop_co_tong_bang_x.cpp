#include<iostream>
using namespace std;
int x[100];
int n, S, d;
int sum = 0;
int y[100];
void in(int j)
{
	cout << "[";
	for (int i = 1; i <= j; i++)
	{
			cout << x[i];
			if(i < j)
			{
				cout << " ";
			}
	}
	cout << "]";
}
void gan(int n)
{
	for(int i = 1; i <= n; i++)
	{
		cin >> y[i];
	}
}
void xuly(int i, int m)
{
	//for (int j = m; j >= 1; j--)
	for (int j = m; j <= n; j++)
	{
		x[i] = y[j];
		sum += x[i];
		if (sum == S)
		{
			in(i);
			d = 1;
		}
		else if(sum < S)
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
		d = 0;
		cin >> n >> S;
		gan(n);
		xuly(1, 1);
		if(d == 0)
		{
			cout << -1;
		}
		cout << endl;
	}
	
	return 0;
}

