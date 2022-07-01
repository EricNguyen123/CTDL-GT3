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
		long long *a = new long long[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		set <int> s;
		set <int> ::iterator it;
		for(int i = 0; i < n; i++)
		{
			while(a[i] > 0)
			{
				s.insert(a[i] % 10);
				a[i] /= 10;
			}
			if(s.size() == 10)
			{
				break;
			}
		}
		for(it = s.begin(); it != s.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}
