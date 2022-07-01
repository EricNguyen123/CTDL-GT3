#include<iostream>
using namespace std;
#define e 1000000007

struct matrix
{
	int n;
	unsigned long long a[15][15];
};
struct matrix tich_matrix(matrix mt1, matrix mt2)
{
	matrix mt;
	for(int x = 0; x < mt1.n; x++)
	{
		for(int y = 0; y < mt1.n; y++)
		{
			mt.a[x][y] = 0;
			for(int j = 0; j < mt1.n; j++)
			{
				mt.a[x][y] += mt1.a[x][j] * mt2.a[j][y];
				mt.a[x][y] %= e;
			}
		}
		
	}
	mt.n = mt1.n;
	return mt;
}
unsigned long long tong(matrix mt)
{
	unsigned long long sum = 0;
	for(int i = 0; i < mt.n; i++)
	{
		sum += mt.a[i][mt.n - 1];
		
	}
	sum %= e;
	return sum;
}
matrix Power(matrix mt, long long b)
{
	if(b == 1)
	{
		return mt;
	}
	else
	{
		matrix p = Power(mt, b / 2);
		if(b % 2 == 0)
		{
			return tich_matrix(p, p);
		}
		else
		{
			return tich_matrix(tich_matrix(p, p), mt);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		matrix mt;
		long long k;
		cin >> mt.n >> k;
		for(int i = 0; i < mt.n; i++)
		{
			for(int j = 0; j < mt.n; j++)
			{
				cin >> mt.a[i][j];
			}
		}
		matrix s = Power(mt, k);
		unsigned long long v = tong(s);
		cout << v << endl;
		/*
		for(int i = 0; i < mt.n; i++)
		{
			for(int j = 0; j < mt.n; j++)
			{
				cout << s.a[i][j] << " ";
			}
			cout << endl;
		}
		*/
	}
	return 0;
}
