#include<iostream>
#include<vector>
#include<algorithm>
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
		vector <int> s;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			s.push_back(x);
		}
		int x = lower_bound(s.begin(), s.end(), k) - s.begin();
		if(s[x] == k)
		{
			cout << x + 1 << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
