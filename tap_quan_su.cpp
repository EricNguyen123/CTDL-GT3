#include<iostream>
#include<stdbool.h>
#include<set>
using namespace std;
void in(int k, int x[])
{
	for(int i = 1; i <= k; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
bool check(int *x, int k, int n)
{
	for(int i = 1; i <= k; i++)
	{
		if(x[i] < n - k + i)
		{
			return false;
		}
	}
	return true;
}
void kiem_tra_va_ket_qua(int k, int *x, set <int> z)
{
	int d = 0;
	for(int i = 1; i <= k; i++)
	{
		set <int> ::iterator it = z.find(x[i]);
		if(it == z.end())
		{
			d++;
		}
	}
	cout << d << endl;
}
void xu_ly(int n, int k, int *x, set <int> z)
{
	if(check(x, k, n) == false)
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
		kiem_tra_va_ket_qua(k, x, z);
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
		set <int> z;
		for(int i = 1; i <= k; i++)
		{
			cin >> x[i];
			z.insert(x[i]);
		}
		xu_ly(n, k, x, z);
	}
	return 0;
}
