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
		cout << "Buoc " << i + 1 << ":";
		for(int j = 0; j < n; j++)
		{
			cout << " " << a[j];
		}
		cout << endl;
	
		if(i == n - 2)
		{
			break;
		}
	}
	
	return 0;
}
