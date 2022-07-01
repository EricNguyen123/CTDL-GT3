#include<iostream>
#include<stdbool.h>
using namespace std;
int n;
int MAX;
int x[100];
int y[100][100];
bool a[200]={true};
bool xuoi[200]={true};
bool nguoc[200]={true};
void gan()
{
	for(int i=1;i<=200;i++)
	{
		a[i]=true;
		xuoi[i]=true;
		nguoc[i]=true;
	}
}
void xet_duyet()
{
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum += y[i][x[i]];
	}
	if(sum > MAX)
	{
		MAX = sum;
	}
}
void xuly(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(a[j]==true && xuoi[i-j+n]==true && nguoc[i+j-1]==true)
		{
			x[i]=j;
			a[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n)
			{
				xet_duyet();
			}
			else
			{
				xuly(i+1);
			}
			a[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;
		}
	}
}
void khoi_tao()
{
	n = 8;
	MAX = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> y[i][j];
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		gan();
		khoi_tao();
		xuly(1);
		cout << MAX << endl;
	}

	return 0;
}
