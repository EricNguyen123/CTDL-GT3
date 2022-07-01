#include<iostream>
#include<stdbool.h>
using namespace std;
int x[100];
int n;
bool xet_tam()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == x[i - 1] && x[i] == 1)
		{
			return false;
		}
	}
	return true;
}
bool xet_sau()
{
	for(int i = 1; i <= n - 3; i++)
	{
		if(x[i] == x[i + 1] && x[i] == x[i + 2] && x[i] == x[i + 3] && x[i] == 0)
		{
			return false;
		}
	}
	return true;
}
bool xet()
{
	if(x[1] == 1 && x[n] == 0)
	{
		if(xet_tam() == true && xet_sau() == true)
		{
			return true;
		}
	}
	return false;
}
void in()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == 1)
		{
			cout << 8;
		}
		else
		{
			cout << 6;
		}
	}
	cout << endl;
}
void xuly(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		x[i] = j;
		if(i == n)
		{
			if(xet() == true)
			{
				in();
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
	cin >> n;
	x[0] = -1;
	xuly(1);
	return 0;
}
