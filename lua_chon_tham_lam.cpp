#include<iostream>
using namespace std;
int n, s;
int sum;
int d;
int x[110];
void nhap()
{
	cin >> n >> s;	
}

void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << " ";
}
void Min()
{
	sum = s;
	x[1] = 1;
	sum--;
	int c = 9 * (n - 1);
	while(sum > c && x[1] < 10)
	{
		x[1]++;
		sum--;
	}
	for(int i = 2; i <= n; i++)
	{
		c = 9 * (n - i);
		while(sum > c && x[i] < 10)
		{
			x[i]++;
			sum--;
		}
	}
	in();
	
}
void Max()
{
	sum = s;
	int j = 9;
	int st = 0;
	int en = 0;
	while(sum > 0)
	{
		int m = sum / j;
		en += m;
		for(int i = st + 1; i <= en; i++)
		{
			x[i] = j;
		}
		st = en;
		sum -= m * j;
		j--;
	}
	for(int i = st + 1; i <= n; i++)
	{
		x[i] = 0;
	}
	in();
}
int main()
{
	nhap();
	if(n * 9 < s || 1 > s)
	{
		cout << -1 << " " << -1;
	}
	else
	{
		Min();
		Max();
	}
	return 0;
}
