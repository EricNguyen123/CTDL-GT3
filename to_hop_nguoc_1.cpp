#include<iostream>
#include<stdbool.h>
using namespace std;
void in(int k, int x[])
{
	for(int i = 1; i <= k; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
bool check(int n, int k, int x[])
{
	for(int i = k;  i >= 1; i--)
	{
		if(x[i] > i)
		{
			return false;
		}
	}	
    return true;
}
void xuly(int n, int k, int x[])
{
    if(check(n, k, x) == true)
    {
        return;
    }
		int d = 0;
		int z;
		for(int i = k; i >= 2; i--)
		{
			if(x[i] - x[i - 1] > 1)
			{
				x[i]--;
				d = 1;
				z = i + 1;
				break;
			}
		}
		if(d == 0)
		{
			x[1]--;
			for(int i = 2; i <= k; i++)
			{
				x[i] = n - k + i;
			}
		}
		else
		{
			for(int i = z; i <= k; i++)
			{
				x[i] = n - k + i;
			}
		}
		in(k, x);
	xuly(n, k, x);
	
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int *x = new int[k + 1];
		for(int i = 1; i <= k; i++)
		{
			x[i] = n - k + i;
		}
        in(k, x);
		xuly(n, k, x);
	}
	return 0;
}
