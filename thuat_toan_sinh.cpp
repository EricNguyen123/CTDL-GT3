#include<iostream>
#include<stdbool.h>
using namespace std;
int n;
int x[100];
bool check()
{
	int m = n;
	int i = 1;
	while(i < m)
	{
		if(x[i] != x[m])
		{
			return false;
		}
		i++;
		m--;
	}
	return true;
}
void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i] << " ";
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
			if(check() == true)
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
	xuly(1);	
	return 0;
}
