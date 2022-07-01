#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	cin >> n;
    int *a = new int[n];
    multiset <int> s;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	s.insert(a[i]);
	}
	for(int i = 0; i < n - 1; i++)
	{
		for( int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
		int d = 0;
		int l = 0;
		for(multiset <int> ::iterator j = s.begin(); j != s.end(); j++)
		{
			if(a[l] != *j)
			{
				d = 1;
				break;
			}
			l++;
		}
		
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
		if(d == 0)
		{
			break;
		}
	}
	return 0;
}
