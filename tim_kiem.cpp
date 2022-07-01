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
		int k;
		cin >> k;
		set <int> s;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		set <int> ::iterator it;
		it = s.find(k);
		if(it == s.end())
		{
			cout << -1 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}
	return 0;
}
