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
		if(x[i] < n-k+i)
		{
			return false;
		}
	}	
    return true;
}
void xuly(int n, int k, int x[])
{
	if(check(n, k, x) == false)
	{
		int i = k;
		while(x[i] == n - k + i)
		{
			i--;
		}
		x[i]++;
		for(int j = i + 1; j <= k; j++)
		{
			x[j] = x[j - 1] + 1;
		}
		in(k, x);
	}
    else
    {
    	for(int i = 1; i <= k; i++)
    	{
    		cout << i << " "; 
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
		int n, k;
		cin >> n >> k;
		int *x = new int[k + 1];
		for(int i = 1; i <= k; i++)
		{
			cin >> x[i];
		}
		xuly(n, k, x);
	}
	return 0;
}
