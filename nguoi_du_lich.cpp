#include<iostream>
using namespace std;
int n;
int a[20][20];
long long s;
long long fopt;
bool chuaxet[20];
int x[20];
int xopt[20];
void nhap()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		chuaxet[i] = false;
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	s = 0;
	fopt = 100000000;
	x[1] = 1;
}
void capnhat()
{
	s = s + a[x[n]][x[1]];
//	cout << s << endl;
	if(s < fopt)
	{
		fopt = s;
	}
	s -= a[x[n]][x[1]];
}
void xuly(int i)
{
	for(int j = 2; j <= n; j++)
	{
		if(chuaxet[j] == false)
		{
			x[i] = j;
			s += a[x[i - 1]][x[i]];
			//cout<< a[x[i - 1]][x[i]] << " ";
			chuaxet[j] = true;
			if(i == n)
			{
				//cout << endl;
				capnhat();
			}
			else if(s < fopt)
			{
				xuly(i + 1);
	    	}
	    	//cout << "-";
			s -= a[x[i - 1]][x[i]];
			//cout << "{" << a[x[i - 1]][x[i]] << "}";
			chuaxet[j] = false;
		}
	}
}
int main()
{
	nhap();
	xuly(2);
	cout << fopt << endl;
	return 0;
}
