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
		long long n, k;
		cin >> n >> k;
		vector <long long> a;
		for(long long i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		long long d = 0;
		for(long long i = 0; i < n; i++)
		{
			long long x = lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - a.begin();
			d += x - i - 1;
		}
		cout << d << endl;
	}
	return 0;
}
