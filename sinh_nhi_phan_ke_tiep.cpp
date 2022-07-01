#include<iostream>
#include<string>
using namespace std;
int kiem_tra(int n, int x[])
{
	for(int i = n -1; i >= 0; i--)
	{
		if(x[i] == 0)
		{
			return i;
		}
	}
	return 0;
}
void in(int n, int x[])
{
	for(int i = 0; i < n; i++)
	{
		cout << x[i];
	}
	cout << endl;
}
void sinh_ke_tiep(int n, int x[])
{
	int i = kiem_tra(n, x);
	if(i != 0)
	{
		x[i] = 1;
		for(int j = i + 1; j < n; j++)
		{
			x[j] = 0; 
		}
		in(n, x);
	}
	else
	{
		for(int j = 0; j < n; j++)
		{
			x[j] = 0; 
		}
		in(n, x);
	}
     
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int *x = new int[n];
		for(int i = 0; i < n; i++)
		{
			x[i] = int(s[i] - '0');
		}
		sinh_ke_tiep(n, x);
	}
	return 0;
}
