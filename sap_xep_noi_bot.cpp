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
		
		cout << "Buoc " << i + 1 << ":";
		for(int j = 0; j < n; j++)
		{
			cout << " " << a[j];
		}
		cout << endl;
	
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
	
	return 0;
}
