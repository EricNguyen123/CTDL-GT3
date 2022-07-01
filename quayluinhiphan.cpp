#include<iostream>
using namespace std;
int n;
int x[100];
void in()
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << endl;
}
void xuly(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		x[i] = j;
		if(i == n)
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
	cin >> n;
	xuly(1);
	return 0;
}
