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
	for( int i = 0; i < n; i++)
	{
		a.insert(x[i]);
		cout << "Buoc " << i << ":";
		for(it = a.begin(); it != a.end(); it++)
		{
			cout << " " << *it;
		}
		cout << endl;
	}
	
	return 0;
}
