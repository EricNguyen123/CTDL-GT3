#include<iostream>
#include<set>
using namespace std;
int x[50];
int a[50];
int n;
int k;

void in()
{
	for(int i = 0; i < k; i++)
	{
		cout << a[x[i + 1] - 1] << " ";
	}
	cout << endl;
}
void xuly(int i)
{
	for(int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if(i == k)
		{
			in();
		}
		else
		{
			xuly(i + 1);			
		}
	}
}
int main()
{
	    int m;
		cin >> m;
		cin >> k;
		set <int> s;
		for(int i = 0; i < m; i++)
		{
			int v;
			cin >> v;
			s.insert(v);
		}
		n = 0;
		for(set <int> ::iterator i = s.begin(); i != s.end(); i++)
		{
			a[n] = *i;
			n++;
		}
		x[0] = 0;
		xuly(1);

	return 0;
}
