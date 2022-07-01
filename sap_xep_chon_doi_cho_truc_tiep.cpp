#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
	}
	int **b = new int*[n];
	for(int i = 0; i < n; i++)
	{
	    b[i] = new int[n];
	}
	int dem = 0;
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		int tg = a[min];
		a[min] = a[i];
		a[i] = tg;
		
		for(int j = 0; j < n; j++)
		{
			b[dem][j] = a[j];
		}
		dem++;
	
		if(i == n - 2)
		{
			break;
		}
	}
	for(int i = dem - 1; i >= 0; i--)
	{
		cout << "Buoc " << i + 1 << ":";
		for(int j = 0; j < n; j++)
		{
			cout << " " << b[i][j];
		}
		cout << endl;
	}
	return 0;
}
