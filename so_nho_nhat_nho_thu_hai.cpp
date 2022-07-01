#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		set <long> a;
		for(int i = 0; i < n; i++)
		{
			long x;
			cin >> x;
			a.insert(x);
		}
		set <long> ::iterator x[2];
		int d = 0;
		for(set <long> ::iterator i = a.begin(); i != a.end(); i++)
		{
			x[d] = i;
			d++;
			if(d == 2)
			{
				break;
			}
		}
		if(a.size() < 2)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << *x[0] << " " << *x[1] << endl;
		}
	}
	return 0;
}
