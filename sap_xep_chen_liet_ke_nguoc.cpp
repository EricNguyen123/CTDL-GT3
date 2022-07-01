#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	multiset <int> a;
	multiset <int> ::iterator it;
	int *x = new int[n];
	for( int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	int **b = new int*[n];
	for(int i = 0; i < n; i++)
    {
	    b[i] = new int[n];
	}
	int *d = new int[n];
	for( int i = 0; i < n; i++)
	{
		a.insert(x[i]);
		d[i] = 0;
		for(it = a.begin(); it != a.end(); it++)
		{
			b[i][d[i]] = *it;
			d[i]++;
		}
		
	}
	for(int i = n - 1; i >= 0; i--)
	{
		cout << "Buoc " << i << ":";
		for(int j = 0; j < d[i]; j++)
		{
			cout << " " << b[i][j];
		}
		cout << endl;
	}
	return 0;
}
