#include<iostream>
using namespace std;
void khoi_tao(int n, int x[], string s)
{
	for(int i = 1; i <= n; i++)
	{
		x[i] = int(s[i - 1] - '0');
	}
}
int kiem_tra(int n, int x[])
{
	for(int i = n; i >= 1; i--)
	{
		if(x[i] == 1)
		{
			return i;
		}
	}
	return 0;
}
void in(int n, int x[])
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << endl;
}
void xu_ly(int n, int x[])
{
	int i = kiem_tra(n, x);
	if(i != 0)
	{
		x[i] = 0;
		for(int j = i + 1; j <= n; j++)
		{
			x[j] = 1;
		}
		in(n, x);
	}
	else
	{
		for(int i = 1; i <= n; i++)
		{
			cout << 1;
		}
		cout << endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int *x = new int[n + 1];
		khoi_tao(n, x, s);
		xu_ly(n, x);
	}
	return 0;
}
