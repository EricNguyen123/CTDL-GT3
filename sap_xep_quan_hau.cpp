#include<iostream>
#include<stdbool.h>
using namespace std;
int n;
int d;
int x[100];
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
				d++;
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
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		gan();
		cin >> n;
		d = 0;
		xuly(1);
		cout << d << endl;
	}
	
	return 0;
}
