#include<iostream>
using namespace std;
int n;
int a[120];
int x[120];
int d;
long sum1, sum2;
void nhap()
{
	sum2 = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum2 += a[i];
		
	}
	sum1 = 0;
	d = 0;
}

void xuly(int i, int m)
{
	for(int j = m; j < n; j++)
	{
		if(d == 1)
		{
			break;
		}
		x[i] = a[j];
		sum1 += x[i];
		if(sum1 == sum2)
		{
			d = 1;
		}
		else if(sum1 < sum2)
		{
			xuly(i + 1, j + 1);
		}
		sum1 -= x[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		nhap();
		if(sum2 % 2 == 1)
		{
			cout << "NO" << endl;
		}
		else
		{
			sum2 /= 2;
		    xuly(1, 1);
			if(d == 1)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		
	}
	return 0;
}
