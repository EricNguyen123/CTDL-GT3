#include<iostream>
#include<algorithm>
#include<math.h>
#include<set>
using namespace std;
struct a
{
   int x;
   int y;	
};
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, X;
		cin >> n;
		cin >> X;
		set<int>c;
		a *b = new a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> b[i].x;
			b[i].y = abs(X - b[i].x);
			c.insert(b[i].y);
		}
		for(set<int> ::iterator i = c.begin(); i != c.end(); i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(*i == b[j].y)
			    cout << b[j].x << " ";
			}
			
		}
		cout << endl;
	}
	return 0;
}
