#include<iostream>
using namespace std;
int n;
int x[100];
int y[100];
void doi()
{
	for(int i = 1; i <= n; i++)
	{
	    x[i] = y[i];
	}
}
void chuyen_ma_nhi_phan_sang_gray()
{
	x[1] = y[1];
	for(int i = 2; i <= n; i++)
	{
		if(y[i] == 1 && y[i - 1] == 1)
		{
			x[i] = 0;
		}
		else if(y[i] == 0 && y[i - 1] == 0)
		{
			x[i] = 0;
		}
		else if((y[i] == 1 && y[i - 1] == 0) || (y[i] == 0 && y[i - 1] == 1))
		{
			x[i] = 1;
		}
	}
}
void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << " ";
}
void xu_ly(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		y[i] = j;
		if(i == n)
		{
			doi();
			chuyen_ma_nhi_phan_sang_gray();
			in();
		}
		else
		{
			xu_ly(i + 1);
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
		xu_ly(1);
		cout << endl;
	}
	return 0;
}
