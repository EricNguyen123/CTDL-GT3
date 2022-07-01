#include<iostream>
#include<stdbool.h>
#include<algorithm>
using namespace std;
struct time
{
	int s;
	int f;
};
bool check(time a, time b)
{
	return a.f < b.f;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		time *a = new time[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i].s >> a[i].f;
		}
		sort(a, a + n, check);
		int d = 1;
		int lcf = a[0].f;
		for(int i = 1; i < n; i++)
		{
			//cout << a[i].s << " " << a[i].f << endl;
			if(a[i].s >= lcf)
			{
				d++;
				lcf = a[i].f;
			}
		}
		cout << d << endl;
	}
	return 0;
}
