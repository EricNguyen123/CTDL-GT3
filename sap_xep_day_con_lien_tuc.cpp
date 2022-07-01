#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *a, int *b)
{
	int tg = *a;
	*a = *b;
	*b = tg;
}
void dem(int a[], int n)
{
	int i, j, min_indx;
	int min = n - 1;
	int max = 0;
	for(i = 0; i < n - 1; i++)
	{
		min_indx = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[j] < a[min_indx])
			{
				min_indx = j;
			}
		}
		if(min_indx != i)
		{
			if(min_indx > max)
			{
				max = min_indx;
			}
			if(min > i)
			{
				min = i;
			}
		}
		swap(&a[i], &a[min_indx]);
	}
	cout << min + 1 << " " << max + 1 << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		dem(a, n);
	}
	return 0;
}
