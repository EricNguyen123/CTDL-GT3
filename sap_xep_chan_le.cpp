#include<iostream>
#include<set>
using namespace std;
int main()
{
	long n;
	cin >> n;
	multiset<long, greater<long> > x;
	multiset<long> y;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			long s;
			cin >> s;
			x.insert(s);
		}
		else
		{
			long s;
			cin >> s;
			y.insert(s);
		}
	}
	multiset<long, greater<long> > ::iterator ix = x.begin();
	multiset<long> ::iterator iy = y.begin();
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			cout << *ix << " ";
			ix++;
		}
		else
		{
			cout << *iy << " ";
			iy++;
		}
	}
	return 0;
}
