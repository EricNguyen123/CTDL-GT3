#include<iostream>
using namespace std;
int x[150];
int a[150];
int c[150];
int fopt = 0;
int xopt[150];
int n;
int landa = 0;
int b;
int W;
void nhap()
{
	cin >> n >> W;
	b = W;
	landa = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void cap_nhat()
{
	if(fopt < landa && b >= 0)
	{
		fopt = landa;
		for(int i = 0; i < n; i++)
		{
			xopt[i]=x[i];
		}
	}
}
void in()
{
	cout << fopt << endl;
	for(int i = 0; i < n; i++)
	{
		cout << xopt[i] << " ";
	}
	cout << endl;
}
void xu_ly(int k)
{
	for(int j = 1; j >= 0; j--)
	{
		x[k] = j;
		landa = landa + c[k] * x[k];
		b = b - a[k] * x[k];
		if(k == n - 1)
		{
			cap_nhat();
		}
		else 
		{
			xu_ly(k + 1);
		}
		landa = landa - c[k] * x[k];
		b = b + a[k] * x[k];
	}
}
int main()
{
	nhap();
	xu_ly(0);
	in();
	return 0;
}
