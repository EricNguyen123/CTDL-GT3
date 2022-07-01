#include<iostream>
#include<map>
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
		long *a = new long[n];
		map <long, long> x;
		set <long> y;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			x[a[i]]++;
			y.insert(a[i]);
		}
		long max = 0;
		for(set <long> ::iterator i = y.begin(); i != y.end(); i++)
		{
			if(max < x[*i])
			{
				max = x[*i];
			}
		}
		
		if(max > n / 2)
		{
			for(set <long> ::iterator i = y.begin(); i != y.end(); i++)
			{
				if(max == x[*i])
				{
					cout << *i << endl;
					break;
				}
			}
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
