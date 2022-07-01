#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n;
		cin >> k;
		multiset <int, greater <int> > s;
		multiset <int, greater <int> > ::iterator it;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		for(it = s.begin(); it != s.end(); it++)
		{
			cout << *it << " ";
			k--;
			if(k == 0)
			{
				break;
			}
		}
		cout << endl;
	}
	return 0;
}
