#include<iostream>
using namespace std;
int n, X, sum, d, x[50], a[50], b[1000][50];
int kiem_nghiem;
void nhap()
{
	cin >> n >> X;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sum = 0;
	d = 0;
	kiem_nghiem = 0;
}
void ghi_nhan(int l)
{
	b[d][0] = l;
	for(int i = 1; i <= l; i++)
	{
		b[d][i] = x[i];
	}
	d++;
}
void xu_ly(int i, int m)
{
	for(int j = m; j <= n; j++)
	{
		x[i] = a[j];
		sum += x[i];
		if(sum == X)
		{
			ghi_nhan(i);
			kiem_nghiem = 1;
		}
		else if(sum < X)
		{
			xu_ly(i + 1, j);
		}
		sum -= x[i];
	}
}
void in()
{
	cout << d << " ";
	for(int i = 0; i < d; i++)
	{
		cout << "{";
		for(int j = 1; j <= b[i][0]; j++)
		{
			cout << b[i][j];
			if(j < b[i][0])
			{
				cout << " ";
			}
		}
		cout << "} ";
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		nhap();
		xu_ly(1, 1);
		if(kiem_nghiem == 0)
		{
			cout << -1 << endl;
		}
		else
	    {
	    	in();
		}
	
	}
	return 0;
}
