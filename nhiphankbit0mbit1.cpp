#include<iostream>
#include<stdbool.h>
using namespace std;
int n;
int x[100];
int kk;
int m;
void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << endl;
}
bool check(int k, int y)
{
	int d = 0;
	int i = 1;
	while(i <= n)
	{
		if(x[i] == y)
		{
			while(x[i] == y && i <= n)
			{
				i++;
				d++;
			}
			if(d == k)
			{
				d = 0;
				while(i <= n)
	            {
	            	if(x[i] == y)
	            	{
			            while(x[i] == y && i <= n)
		            	{
			            	i++;
			            	d++;
			            }
			            if(d == k)
			            {
				           return false;
			            }
			            d = 0;
		            }
		            i++;
	            }
	            return true;
			}
			d = 0;
		}
		i++;
	}
    	
	return false;
}
bool checkday()
{
	if(check(kk, 0) == true && check(m, 1) == true)
	{
		return true;
	}
	return false;
}
void xuly(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		x[i] = j;
		if(i == n)
		{
			if(checkday() == true)
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
	cin >> n >> kk >> m;
	xuly(1);
	return 0;
}
