#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int x = n - 1;
		int y = 0;
		for(int i = 0; i < n; i++)
		{
			if(i % 2 == 0)
			{
				cout << a[x] << " ";
				x--;
			}
			else
			{
				cout << a[y] << " ";
				y++;
			}
		}
		cout << endl;
	}
	return 0;
}
