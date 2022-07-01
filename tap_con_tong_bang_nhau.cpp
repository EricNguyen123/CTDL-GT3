#include<iostream>
using namespace std;
int x[100];
int n, S, d;
int sum = 0;
int y[100];
void in(int j)
{
	cout << "[";
	for (int i = 1; i <= j; i++)
	{
			cout << x[i];
			if(i < j)
			{
				cout << " ";
			}
	}
	cout << "]";
}
void gan(int n)
{
	S = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> y[i];
		S += y[i];
	}
}
void xuly(int i, int m)
{
	//for (int j = m; j >= 1; j--)
	for (int j = m; j <= n; j++)
	{
		if(d==1)
		{
			break;
		}
		x[i] = y[j];
		sum += x[i];
		if (sum == S)
		{
			//in(i);
			d = 1;
		}
		else if(sum < S)
		{
			xuly(i + 1, j + 1);
		}
		sum -= x[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		d = 0;
		cin >> n;
		gan(n);
		if(S % 2 == 1)
		{
			cout << "NO" << endl;
		}
		else
		{
			S /= 2;
			xuly(1, 1);
			if(d == 0)
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
		
	}
	
	return 0;
}

