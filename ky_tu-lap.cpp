#include<iostream>
#include<string.h>
using namespace std;
int n;
int d;
string s[15];
int x[15];
bool y[15];
int Min = 2000000;
void nhap()
{
	cin >> n;
	d = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
		y[i + 1] = false;
	}
}
void dem(int a, int b)
{
	for(int i = 0; i < s[x[a] - 1].size(); i++)
	{
		if(s[x[b] - 1].find(s[x[a] - 1][i]) != -1)
		{
			d++;
		}
	}
}
void kiemtra()
{
	for(int i = 1; i < n; i++)
	{
		dem(i, i + 1);
	}
	if(Min > d)
	{
		Min = d;
	}
	if(d == 0)
	{
		for(int i = 0; i < n; i++)
		{
			cout << s[i] << endl;
		}
		cout <<"-----";
	}
	d = 0;
}
void xuly(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(y[j] == false)
		{
			x[i] = j;
			y[j] = true;
			if(i == n)
			{
				kiemtra();
			}
			else
			{
				xuly(i + 1);
			}
			y[j] = false;
		}
	}
}
int main()
{
	nhap();
	xuly(1);
	cout << Min;
	return 0;
}
