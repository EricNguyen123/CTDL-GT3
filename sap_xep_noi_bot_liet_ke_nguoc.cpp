#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
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
			for(int j = 0; j < n - i - 1; j++)
			{
				if(a[j] > a[j + 1])
				{
					int tg = a[j];
			        a[j] = a[j + 1];
			        a[j + 1] = tg;
				}
			}
			
			
			for(int j = 0; j < n; j++)
			{
				b[dem][j] = a[j];
			}
		    dem++;
		
			int th = 0;
			for(int j = 0; j < n - 1; j++)
			{
				if(a[j] > a[j + 1])
				{
					th = 1;
				}
			}
			if(th == 0)
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
	}
	
	return 0;
}
