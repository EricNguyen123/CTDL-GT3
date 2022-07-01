#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n;
		cin >> m;
		set <long long> b;
		set <long long, greater<long long> > a;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a.insert(x);
		}
		for(int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			b.insert(x);
		}
		set <long long> ::iterator c = a.begin();
		set <long long, greater<long long> > ::iterator d = b.begin();
		cout << *c * *d << endl;
	}
	return 0;
}
