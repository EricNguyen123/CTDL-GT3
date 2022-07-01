#include<iostream>
#include<algorithm>
#include<stdbool.h>
using namespace std;
int n;
int x[50];
int a[50];
bool check[50];
void gan()
{
	for(int i = 0; i < n; i++)
	{
		check[i] = true;
	}
}

void in()
{
	for(int i = 0; i < n; i++)
	{
	    cout << a[x[i]] << " ";	
	}
	cout << endl;
}
void xuly(int i)
{
	for(int j = 0; j < n; j++)
	{
		if(check[j] == true)
		{
			x[i] = j;
			check[j] = false;
			if(i == n - 1)
			{
				in();
			}
			else
			{
				xuly(i + 1);
			}
			check[j] = true;
		}
	}
}
int main()
{
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	    sort(a, a + n);
		gan();
		xuly(0);
	return 0;
}
