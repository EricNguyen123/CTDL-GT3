#include<iostream>
using namespace std;
int n, x;
int a[100005];
int tim_kiem_nhi_phan(int low, int high)
{
	if(high < low)
	{
		return -1;
	}
	int mid = low + (high - low) / 2;
	if(a[mid] == x)
	{
		return mid;
	}
	else if(a[mid] < x)
	{
		return tim_kiem_nhi_phan(mid + 1, high);
	}
	else if(a[mid] > x)
	{
		return tim_kiem_nhi_phan(low, mid - 1);
	}
}
void nhap()
{
	cin >> n >> x;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		nhap();
		int s = tim_kiem_nhi_phan(0, n - 1);
		if(s == -1)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << s + 1 << endl;
		}
	}
	return 0;
}
