#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		multiset <long> x;
		multiset <long> y;
		long *a = new long[n];
		cin >> a[0];
		y.insert(a[0]);
		for(int i = 1; i < n; i++)
		{
			cin >> a[i];
			x.insert(a[i]);
		}
		int *b = new int[n];
		int j = 0;
		multiset <long> ::iterator l = y.end();
		multiset <long> ::iterator k = x.begin();
		l--;
		if(*k >= *l)
		{
			b[j] = 1;
			j++;
		}
		for(int i = 1; i < n - 1; i++)
		{
			if(a[i] < *l)
			{
				k = x.find(a[i]);
			    x.erase(k);
			    k = x.begin();
			    if(*k >= *l)
				{
					b[j] = i + 1;
					j++;
				}
			}
			else
			{
				k = x.find(a[i]);
				x.erase(k);
				y.insert(a[i]);
				k = x.begin();
				l = y.end();
				l--;
				if(*k >= *l)
				{
					b[j] = i + 1;
					j++;
				}
			}
		}
		cout << j << endl;
		if(j != 0)
		{
			for(int i = 0; i < j; i++)
			{
				cout << b[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

