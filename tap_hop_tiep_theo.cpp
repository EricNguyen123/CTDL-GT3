#include<iostream>
#include<stdbool.h>
#include<set>
using namespace std;
void in(int k, int x[], set <int> y)
{
	int dem = 0;
	for(int i = 1; i <= k; i++)
	{
		set <int> ::iterator it = y.find(x[i]);
		if(it == y.end())
		{
			dem++;
		}
	}
	cout << dem << endl;
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
void xuly(int n, int k, int x[], set <int> y)
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
		in(k, x, y);
	}
    else
    {
		cout << k << endl;
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
		set <int> y;
		for(int i = 1; i <= k; i++)
		{
			cin >> x[i];
			y.insert(x[i]);
		}
		xuly(n, k, x, y);
	}
	return 0;
}
