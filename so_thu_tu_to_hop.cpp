#include<iostream>
using namespace std;
int x[50];
int a[50];
int n;
int k;
int d = 0;
int kt()
{
	for(int i = 0; i < k; i++)
	{
		if(a[i] != x[i + 1])
		{
			return 0;
		}
	}
	return 1;
}
void xuly(int i)
{
	for(int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if(i == k)
		{
			d++;
			if(kt() == 1)
			{
				cout << d << endl;
				break;
			}
		}
		else
		{
			xuly(i + 1);			
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> k;
		for(int i = 0; i < k; i++)
		{
			cin >> a[i];
		}
		d = 0;
		x[0] = 0;
		xuly(1);
	}
	return 0;
}
