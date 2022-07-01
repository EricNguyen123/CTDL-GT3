#include<iostream>
using namespace std;
int n;
int x[100];
int y[100];
int kq[1000][100];
int sum = 0;
int d = 0;
void khoi_tao()
{
	sum = 0;
	d = 0;
	for(int i = 1; i <= n; i++)
	{
		y[i] = i;
	}
}
void xet_duyet_va_cap_nhap(int l)
{
	kq[d][0] = l;
	for(int i = 1; i <= l; i++)
	{
		kq[d][i] = x[i];
	}
	d++;
}
void in()
{
	cout << d << endl;
	for(int i = 0; i < d; i++)
	{
		cout << "(";
		for(int j = 1; j <= kq[i][0]; j++)
		{
			cout << kq[i][j];
			if(j < kq[i][0])
			{
				cout << " ";
			}
		}
		cout << ") ";
	}
	cout << endl;
}
void xu_ly(int i, int m)
{
	for(int j = m; j >= 1; j--)
	{
		x[i] = y[j];
		sum += x[i];
		if(sum == n)
		{
			xet_duyet_va_cap_nhap(i);
		}
		else if(sum < n)
		{
			xu_ly(i + 1, j);
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
		khoi_tao();
		xu_ly(1, n);
		in();
	}
	return 0;
}
