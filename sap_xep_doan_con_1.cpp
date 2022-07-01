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
		vector <long> a2;
		long x;
		cin >> x;
		long Max = x;
		for(int i = 1; i < n; i++)
		{
			cin >> x;
			a2.push_back(x);
		}
		int d = 0;
		int *b0 = new int[n];
		vector <long> ::iterator b;
		for(int i = 1; i < n - 1; i++)
		{
			Max = max(a2.front(), Max);
			a2.erase(a2.begin());
			b = lower_bound (a2.begin(), a2.end(), Max);
			if(*b >= Max)
			{
				b0[d] = i + 1;
				d++;
			}
		}
		cout << d << endl;
		if(d != 0)
		{
			for(int i = 0; i < d; i++)
			{
				cout << b0[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
