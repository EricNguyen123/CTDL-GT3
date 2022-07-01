#include<iostream>
#include<queue>
using namespace std;
bool xet[505];
long long x[505];
void xuly()
{
	queue <long long> a;
	a.push(9);
	int d = 0;
	while(d < 500)
	{
		long long t = a.front();
		a.pop();
		for(int i = 1; i < 501 && i <= t; i++)
		{
			if(t % i == 0 && !xet[i])
			{
				xet[i] = true;
				x[i] = t;
				d++;
			}
		}
		a.push(t * 10);
		a.push(t * 10 + 9);
	}
}
int main()
{
	xuly();
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		cout << x[n] << endl;
	}
}
