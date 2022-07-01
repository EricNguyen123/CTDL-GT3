#include<iostream>
#include<stdbool.h>
#include<math.h>
using namespace std;
int x[100];
int n;

void in()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == 1)
		{
			cout << 8;
		}
		else
		{
			cout << 6;
		}
	}
	cout << " ";
}
void xuly(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		x[i] = j;
		if(i == n)
		{
			in();
		}
		else
		{
			xuly(i + 1);
		}
	}
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        x[0] = -1;
        cout << pow(2, n) << endl;
        xuly(1);
        cout << endl;
    }
	
	return 0;
}
