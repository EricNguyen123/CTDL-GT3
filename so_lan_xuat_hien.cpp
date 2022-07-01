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
		int x;
		cin >> n;
		cin >> x;
		multiset <int> s;
		for(int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			s.insert(a);
		}
		int d = s.count(x);
		if(d == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << d << endl;
		}
	
	}
	return 0;
}
