#include<iostream>
using namespace std;
int n;
int x[10];
string s[10];
bool y[10];
void khoi_tao()
{
	cin >> n;
	x[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		y[i] = false;
		s[i] = "";
	}
}
void inso()
{
	for(int i = 1; i <= n; i++)
	{
		cout << s[i];
	}
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << endl;
}
void hoanviso(int i)
{
	for(int j = 1; j <= n; j++)
	{
		x[i] = j;
		if(i == n)
		{
			inso();
		}
		else
		{
			hoanviso(i + 1);
		}
	}
	
}
void inma()
{
	hoanviso(1);
}
void hoanvichu(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(y[j] == false)
		{
			s[i] += char(j - 1 + 'A');
			y[j] = true;
			if(i == n)
			{
				inma();
			}
			else
			{
				hoanvichu(i + 1);
			}
			s[i] = "";
			y[j] = false;
		}
	}
}
int main()
{
	khoi_tao();
	hoanvichu(1);
	return 0;
}
