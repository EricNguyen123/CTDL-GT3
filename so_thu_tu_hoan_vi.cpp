#include<iostream>
#include<stdbool.h>
using namespace std;
int n;
int x[50];
int a[50];
bool check[50];
int d = 0;
void kt()
{
	for(int i = 0; i < n; i++)
	{
		check[i] = true;
	}
}
int kiem_tra()
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] != x[i])
		{
			return 1;
		}
	}
	return 0;
}
void xuly(int i)
{
	for(int j = 0; j < n; j++)
	{
		if(check[j] == true)
		{
			x[i] = j + 1;
			check[j] = false;
			if(i == n - 1)
			{
				d++;
				if(kiem_tra() == 0)
				{
					cout << d << endl;
					break;
				}
			}
			else
			{
				xuly(i + 1);
			}
			check[j] = true;
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
		d = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		kt();
		xuly(0);
	
	}
	return 0;
}
