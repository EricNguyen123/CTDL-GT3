#include<iostream>
#include<math.h>
#include<stdbool.h>
#include<set>
#include<map>
using namespace std;
int n, p , s, d = 0, sum = 0, x[200], y[100][200];
set <int> snt;
set <int> ::iterator t;
set <int> ::iterator c;
map <int, bool> test;
bool check(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}
void khoi_tao()
{
	snt.insert(2);
	for(int i = 3; i < 200; i += 2)
	{
		if(check(i) == true)
		{
			snt.insert(i);
			test[i] = true;
		}
	}
}
void cap_nhap()
{
	for(int i = 1; i <= n; i++)
	{
		y[d][i] = x[i];
	}
}
void in()
{
	cout << d << endl;
	for(int j = 0; j < d; j++)
	{
		for(int i = 1; i <= n; i++)
		{
			cout << y[j][i] << " ";
		}
		cout << endl;
	}	
}
void xuly(int i, set <int> ::iterator z)
{
	for(set <int> ::iterator j = z; j != snt.end(); j++)
	{
		if(test[*j] == true)
		{
			x[i] = *j;
			test[*j] = false;
			sum += *j;
			if(i == n)
			{
				if(sum == s)
				{
					cap_nhap();
				    d++;
				}
				
			}
			else if(i < n)
			{
				xuly(i + 1, j++);
				j--;
			}
			sum -= *j;
			test[*j] = true;
		}
			
	}
}
int main()
{
	int tt;
	cin >> tt;
	khoi_tao();
	while(tt--)
	{
		d = 0;
		sum = 0;
		cin >> n >> p >> s;
		t = snt.lower_bound(p + 1);
		xuly(1, t);
		in();
	}
	return 0;
}
