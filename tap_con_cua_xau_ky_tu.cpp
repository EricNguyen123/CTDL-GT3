#include<iostream>
#include<algorithm>
using namespace std;
int x[50];
int n;
string s;
void in(int k)
{
	for(int i = 1; i <= k; i++)
	{
		cout << s[x[i] - 1];
	}
	cout << " ";
}
void xuly(int i, int m)
{
	for(int j = m; j <= n; j++)
	{
		x[i] = j;
		in(i);
		xuly(i + 1, j + 1);
		
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> s;
		int *v = new int[n];
		for(int i = 0; i < n; i++)
		{
			v[i] = int(s[i] - 'a');
		}
		sort(v, v + n);
		for(int i = 0; i < n; i++)
		{
			s[i] = char(v[i] + 'a');
		}
		x[0] = 0;
		xuly(1, 1);
		cout << endl;
	}
	
	return 0;
}
