#include<iostream>
#include<algorithm>
#include<stdbool.h>
using namespace std;
struct ds
{
	int x;
	int dem;
	int soluong;
};
bool check(ds a, ds b)
{
	if(a.soluong == b.soluong)
	{
		return a.x < b.x;
	}
	return a.soluong > b.soluong;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ds *a = new ds[n];
		int j = 0;
		for(int i = 0; i < n; i++)
		{
			int X;
			cin >> X;
			int th = 0;
			for(int l = 0; l < j; l++)
			{
				if(a[l].x == X)
				{
					th = 1;
					a[l].soluong++;
					a[l].dem++;
					break;
				}
			}
			if(th == 0)
			{
				a[j].x = X;
				a[j].soluong = 1;
				a[j].dem = 1;
				j++;
			}
		}
		sort(a, a + j, check);
		for(int i = 0; i < j; i++)
		{
			while(a[i].dem--)
			{
				cout << a[i].x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
