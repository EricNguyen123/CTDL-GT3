#include<iostream>
#include<stdbool.h>
using namespace std;
int x[25];
int n, k, s, ket_qua;
bool kiem_tra()
{
	int sum = 0;
	for(int i = 1; i <= k; i++)
	{
		sum += x[i];
	}
	if(sum == s)
	{
		return true;
	}
	return false;
}
void xu_ly(int i)
{
	for(int j = x[i - 1] + 1; j <= n - k + i; j++)
	{
		x[i] = j;
		if(i == k)
		{
			if(kiem_tra() == true)
			{
				ket_qua++;
			}
		}
		else
		{
			xu_ly(i + 1);
		}
	}
}
int main()
{
	x[0] = 0;
	cin >> n >> k >> s;
	while(n != 0 && k != 0 && s != 0)
	{
		ket_qua = 0;
		xu_ly(1);
		cout << ket_qua << endl;
		cin >> n >> k >> s;
	}
	return 0;
}
