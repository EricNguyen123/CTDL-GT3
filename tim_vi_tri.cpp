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
		int *x = new int[n];
		for(int i = 0; i < n; i++)
		{
			cin >> x[i];
			s.insert(x[i]);
		}
		set <int> ::iterator it;
		it = s.find(k);
		if(it == s.end())
		{
			cout << "NO" << endl;
		}
		else
		{
			for(int i = 0; i < n; i++)
			{
				if(*it == x[i])
				{
					cout << i + 1 << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
